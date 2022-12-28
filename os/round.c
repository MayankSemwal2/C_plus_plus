#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
typedef struct rr
{
    int pid, at, bt, ct, tat, wt, rt, st, r_bt, visited;
} round;

int comparator(const void *num1, const void *num2)
{
    round *p1 = (round *)num1;
    round *p2 = (round *)num2;
    return p1->at > p2->at;
}
int max_value(int x, int y)
{
    if (x <= y)
        return y;

    return x;
}
int main()
{
   
    int n, i = 0, curr = 0, first = 0, time_quan, front = -1, rear = -1, q[100];
    float idt = 0;
    printf("\nEnter the Number of Process: ");
    scanf("%d", &n);

    round arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Arrival time and Burst time for process P%d : ", i + 1);
        scanf("%d%d", &arr[i].at, &arr[i].bt);
        arr[i].r_bt = arr[i].bt;
        arr[i].visited = 0;
        arr[i].pid = i + 1;
    }

    printf("\nEnter the time quantam: ");
    scanf("%d", &time_quan);

    qsort(arr, n, sizeof(round), comparator);
    arr[0].visited = 1;
    front = 0, rear = 0;
    q[rear] = 0;

    while (i != n)
    {
        int j = q[front];
        front++;
        if (arr[j].bt == arr[j].r_bt)
        {
            arr[j].st = max_value(curr, arr[j].at);
            curr = arr[j].st;
            if (first == 1)
                idt += 0;

            else
                idt += arr[j].st - curr;
        }
        if (arr[j].r_bt - time_quan > 0)
        {
            arr[j].r_bt -= time_quan;
            curr += time_quan;
        }
        else
        {
            curr += arr[j].r_bt;

            i++;
            arr[j].ct = curr;
            arr[j].tat = arr[j].ct - arr[j].at;
            arr[j].wt = arr[j].tat - arr[j].bt;
            arr[j].rt = arr[j].st - arr[j].at;
            arr[j].r_bt = 0;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i].at <= curr && arr[i].visited != 1)
            {
                rear++;
                q[rear] = i;
                arr[i].visited = 1;
            }
        }
        if (arr[j].r_bt != 0)
        {
            rear++;
            q[rear] = j;
        }
    }
    float sum_wt = 0, sum_tat = 0, sum_rt = 0;
    printf("\nPid\tAT\tBT\tCT\tTAT\tWT\tRT\n");
    for (int i = 0; i < n; i++)
    {
        sum_wt += arr[i].wt;
        sum_tat += arr[i].tat;
        sum_rt += arr[i].rt;
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n", arr[i].pid, arr[i].at, arr[i].bt, arr[i].ct, arr[i].tat, arr[i].wt, arr[i].rt);
    }
    float avg_wt = sum_wt / (float)n, avg_tat = sum_tat / (float)n, avg_rt = sum_rt / (float)n;

    printf("\nAverage Waiting time: %f\n", avg_wt);
    printf("Average Turn Around time: %f\n", avg_tat);
    printf("Average Response time: %f\n", avg_rt);
    printf("CPU utilization(in percentage): %f\n", ((arr[n - 1].ct - idt) / (float)arr[n - 1].ct) * 100);
    printf("Throughput: %f\n", (float)n / (arr[n - 1].ct - arr[0].at));
    return 0;
}
