#include <stdio.h>
#include <stdbool.h>

typedef struct bankers_algo
{
    int max[10], allocated[10], need[10];
} var;
int n, res;
void Input_Details(var process[], int avail[])
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of process[%d]\n", i);
        printf("Enter the Maximum Need : ");
        for (int j = 0; j < res; j++)
            scanf("%d", &process[i].max[j]);

        printf("Enter Allocated Resources for this process : ");
        for (int j = 0; j < res; j++)
        {
            scanf("%d", &process[i].allocated[j]);
            process[i].need[j] = process[i].max[j] - process[i].allocated[j];
        }
        printf("\n");
    }
    printf("Enter the available Resources : ");
    for (int i = 0; i < res; i++)
    {
        scanf("%d", &avail[i]);
    }
}
void Show_Details(var process[])
{
    printf("\nPID\tMaximum\t\tAllocated\tNeed\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", i);
        for (int j = 0; j < res; j++)
        {
            printf("%d ", process[i].max[j]);
        }
        printf("\t\t");
        for (int j = 0; j < res; j++)
        {
            printf("%d ", process[i].allocated[j]);
        }
        printf("\t\t");
        for (int j = 0; j < res; j++)
        {
            printf("%d ", process[i].need[j]);
        }
        printf("\n");
    }
}
bool Check_for_safety(var *process, int *avail, int *safe_seq)
{
    bool end[n];
    int temp[res];
    for (int i = 0; i < res; i++)
    {
        temp[i] = avail[i];
    }
    for (int i = 0; i < n; i++)
    {

        end[i] = false;
    }
    bool proceed = true;
    int index = 0;
    while (proceed)
    {
        proceed = false;
        for (int i = 0; i < n; i++)
        {
            bool flag = true;
            if (end[i] == false)
            {
                for (int j = 0; j < res; j++)
                {
                    if (process[i].need[j] <= temp[j])
                        continue;
                    else
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag == false)
                    continue;
                for (int j = 0; j < res; j++)
                {
                    temp[j] = temp[j] + process[i].allocated[j];
                }
                end[i] = true;
                safe_seq[index++] = i;
                proceed = true;
            }
        }
    }
    int i;
    for (i = 0; i < n && end[i] == true; i++)
    {
        continue;
    }
    if (i == n)
        return true;
    else

        return false;
}
bool check_is_safe(var *process, int *avail, int *safe_seq)
{
    if (Check_for_safety(process, avail, safe_seq) == true)
    {
        return true;
    }
    return false;
}
int main()
{
    
    printf("\nEnter the no. of Process : ");
    scanf("%d", &n);
    printf("Enter the no. of Resource : ");
    scanf("%d", &res);
    printf("\n");

    var process[n];
    int avail[res], safe_seq[n];

    Input_Details(process, avail);
    Show_Details(process);

    printf("\n");
    if (check_is_safe(process, avail, safe_seq))
    {
        printf("\nSystem is in Safe State");
        printf("Safe Sequence is : ");
        for (int i = 0; i < n; i++)
        {
            printf("P[%d] ", safe_seq[i]);
        }
    }
    else
        printf("\nSystem is not in safe State\n");
    printf("\n");
    return 0;
}
