#include <stdio.h>
#include <stdlib.h>

typedef struct srtf_sch
{
    int pid, at, bt, ct, wt, tat, st, rt, rem_bt;
} varsrtf;

int comp(const void *num1, const void *num2)
{
    int x = ((varsrtf *)num1)->at;
    int y = ((varsrtf *)num2)->at;
    return (x - y);
}

int main()
{
   
    int n, idt = 0, temp = 0;
    float total_wt = 0, total_tat = 0, total_rt = 0;
    printf("\nEnter the number of process: ");
    scanf("%d", &n);

    varsrtf arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the arrival and burst time of the process: ");
        scanf("%d %d", &arr[i].at, &arr[i].bt);
        arr[i].pid = i + 1;
        arr[i].rem_bt = arr[i].bt;
    }

    qsort((void *)arr, n, sizeof(arr[0]), comp);
    int i, pc = 0;

    for (i = 0; i < n;)
    {
        int k = -1, min = 9999999;
        for (int j = 0; j < n; j++)
        {
            if (arr[j].at <= pc && arr[j].rem_bt != 0)
            {
                if (arr[j].rem_bt < min)
                {
                    min = arr[j].rem_bt;
                    k = j;
                }
                if (arr[j].rem_bt == min)
                {
                    if (arr[j].at < arr[k].at)
                    {
                        min = arr[j].rem_bt;
                        k = j;
                    }
                }
            }
        }
        if (k != -1)
        {
            if (arr[k].rem_bt == arr[k].bt)
            {
                arr[k].st = pc;
                idt += arr[k].st - temp;
            }

            arr[k].rem_bt = arr[k].rem_bt - 1;
            pc++;
            temp = pc;

            if (arr[k].rem_bt == 0)
            {
                arr[k].ct = pc;
                i++;
                arr[k].tat = arr[k].ct - arr[k].at;
                arr[k].wt = arr[k].tat - arr[k].bt;
                arr[k].rt = arr[k].st - arr[k].at;
                total_wt = total_wt + arr[k].wt;
                total_rt = total_rt + arr[k].rt;
                total_tat = total_tat + arr[k].tat;
            }
        }
        else
            pc++;
    }
    printf(" PID\tAT\tBT\tST\tCT\tTAT\tWT\tRT\n");
    for (int j = 0; j < n; j++)
    {
        printf(" P%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", arr[j].pid, arr[j].at, arr[j].bt, arr[j].st, arr[j].ct, arr[j].tat, arr[j].wt, arr[j].rt);
    }

    int length_cycle = pc - arr[0].at;
    float cpu_util = ((length_cycle - idt) / length_cycle) * 100;
    float tp = (float)n / (length_cycle); // Throughput

    printf("Average turn around time of all processes is: %f\n", total_tat / (float)n);
    printf("Average waiting time of total processes is: %f\n", total_wt / (float)n);
    printf("Average response time of total processes is: %f\n", total_rt / (float)n);
    printf("CPU idle time is: %d\n", idt);
    printf("CPU utilization(in percentage) is: %.2f \n", (float)cpu_util);
    printf("Throughput of all processes is: %f\n\n", tp);
    return 0;
}
