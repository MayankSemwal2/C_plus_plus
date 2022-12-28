#include <stdio.h>
#include <stdlib.h>
typedef struct fcfs_sch
{
    int pid, at, bt, ct, tat; // arrival,burst,completion,turnaround time
    int wt, rt, st;           // waiting,response,start time
} fcfs;
int comp(const void *num1, const void *num2)
{
    struct fcfs_sch *a = (struct fcfs_sch *)num1;
    struct fcfs_sch *b = (struct fcfs_sch *)num2;
    if (a->at >= b->at)
        return 1;
    else
        return -1;
}
int main()
{

  
    int n;
    printf("\nEnter the total number of Processs: ");
    scanf("%d", &n);
    fcfs arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Arrival time and Burst time respectively for process P%d : ", i + 1);
        arr[i].pid = i + 1;
        scanf("%d%d", &arr[i].at, &arr[i].bt);
    }
    qsort(arr, n, sizeof(fcfs), comp);
    float length_cycle;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            arr[i].ct = arr[i].at + arr[i].bt;
        }
        else if (arr[i].at >= arr[i - 1].ct)
        {
            arr[i].ct = arr[i].at + arr[i].bt;
        }
        else
            arr[i].ct = arr[i - 1].ct + arr[i].bt;
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            arr[0].tat = arr[0].ct - arr[0].at;
            arr[0].wt = arr[0].tat - arr[0].bt;
            arr[0].rt = arr[0].wt;
        }
        else
        {
            arr[i].tat = arr[i].ct - arr[i].at;
            arr[i].wt = arr[i].tat - arr[i].bt;
            arr[i].rt = arr[i].wt;
        }
    }
    float avg_tat = arr[0].tat, avg_wt = arr[0].wt;
    float avg_rt = arr[0].rt;
    int idt = 0;
    for (int i = 1; i < n; i++)
    {
        int x;
        avg_tat += arr[i].tat;
        avg_wt += arr[i].wt;
        avg_rt += arr[i].rt;
        if (arr[i].at > arr[i - 1].ct)
        {
            x = arr[i].at - arr[i - 1].ct;
            idt += x;
        }
    }
    printf(" PID\tAT\tBT\tCT\tTAT\tWT\tRT\n");
    for (int j = 0; j < n; j++)
    {
        printf(" P%d\t%d\t%d\t%d\t%d\t%d\t%d\n", arr[j].pid, arr[j].at, arr[j].bt,
               arr[j].ct, arr[j].tat, arr[j].wt, arr[j].rt);
    }
    length_cycle = arr[n - 1].ct - arr[0].at;
    float utilisation_cpu = ((length_cycle - idt) / length_cycle) * 100;
    float tp = (float)n / (length_cycle); // Throughput
    printf("Average turn around time of all processes is: %f\n", avg_tat / (float)n);
    printf("Average waiting time of total processes is: %f\n", avg_wt / (float)n);
    printf("Average response time of total processes is: %f\n", avg_rt / (float)n);
    printf("CPU idle time is: %d\n", idt);
    printf("CPU utilization(in percentage) is: %.2f \n", (float)utilisation_cpu);
    printf("Throughput of all processes is: %f\n\n", tp);
    return 0;
}