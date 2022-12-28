#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

typedef struct priority
{
    int pid, at, bt, ct, tat, wt, rt, st, priority, is_c, remaining_bt;
} var;

int comp(const void *x, const void *y)
{
    var *num1 = (var *)x;
    var *num2 = (var *)y;
    return num1->at > num2->at;
}

int main()
{
  
    int n, curr = 0, c = 0, prev = 0;
    float total_it = 0;

    printf("\nEnter the no. of priority: ");
    scanf("%d", &n);
    var arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("For priority %d Enter Arrival time and Burst time and priority respectively : ", i + 1);
        arr[i].pid = i + 1;
        scanf("%d%d%d", &arr[i].at, &arr[i].bt, &arr[i].priority);
        arr[i].remaining_bt = arr[i].bt;
        arr[i].is_c = 0;
    }
    qsort(arr, n, sizeof(var), comp);
    while (c != n)
    {
        int idx = -1, mx = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i].at <= curr && arr[i].is_c == 0)
            {
                if (arr[i].priority > mx)
                {
                    mx = arr[i].priority;
                    idx = i;
                }
                if (arr[i].priority == mx)
                {
                    if (arr[i].at < arr[idx].at)
                    {
                        mx = arr[i].priority;
                        idx = i;
                    }
                }
            }
        }

        if (idx != -1)
        {
            if (arr[idx].remaining_bt == arr[idx].bt)
            {
                arr[idx].st = curr;
                total_it += arr[idx].st - prev;
            }
            arr[idx].remaining_bt -= 1;
            curr++;

            prev = curr;

            if (arr[idx].remaining_bt == 0)
            {
                arr[idx].ct = curr;
                arr[idx].tat = arr[idx].ct - arr[idx].at;
                arr[idx].wt = arr[idx].tat - arr[idx].bt;
                arr[idx].rt = arr[idx].st - arr[idx].at;
                arr[idx].is_c = 1;
                c++;
            }
        }
        else
        {
            curr++;
        }
    }

    float total_wt = 0, total_tat = 0, total_rt = 0;
    for (int i = 0; i < n; i++)
    {
        total_wt += arr[i].wt;
        total_tat += arr[i].tat;
        total_rt += arr[i].rt;
    }

    printf("\nPid\tAT\tBT\tCT\tTAT\twt\tRT\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n", arr[i].pid, arr[i].at, arr[i].bt, arr[i].ct, arr[i].tat, arr[i].wt, arr[i].rt);
    }
    printf("\nAverage Waiting time %f\n", total_wt / (float)n);
    printf("Average Turn Around time %f\n", total_tat / (float)n);
    printf("Average Response time %f\n", total_rt / (float)n);
    printf("CPU utilization %f\n", ((arr[n - 1].ct - total_it) / (float)arr[n - 1].ct) * 100);
    printf("Throughput %f\n", (float)n / (arr[n - 1].ct - arr[0].at));

    return 0;
}
