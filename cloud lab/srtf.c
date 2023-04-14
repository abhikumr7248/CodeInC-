#include <stdio.h>
struct process
{
    int WT, AT, BT, RT, CT, TAT, P_number;
};
struct process a[10];
int main()
{
    struct process min, te;
    int n, temp[10];
    int sum_burst = 0;
    int IT = 0;
    int count = 0, t = 0, short_P;
    float total_WT = 0, total_TAT = 0, Avg_WT, Avg_TAT;
    printf("\nenter the no. of process: ");
    scanf("%d", &n);
    printf("\nEnter the arrival time and burst time of the process\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the AT for process %d :", i + 1);
        scanf("%d", &a[i].AT);
        printf("Enter the BT for process %d :", i + 1);
        scanf("%d", &a[i].BT);
        a[i].P_number = i + 1;
    }
    te = a[0];
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[i].BT > a[j].BT)
            {

                te = a[i];
                a[i] = a[j];
                a[j] = te;
            }
        }
    }

    min = a[0];
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[i].AT > a[j].AT)
            {

                min = a[i];
                a[i] = a[j];
                a[j] = min;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        temp[i] = a[i].BT;
    }
    for (int i = 0; i < n; i++)
    {
        sum_burst = sum_burst + temp[i];
    }
    a[9].BT = 10000;
    for (t = 0; count != n; t++)
    {
        short_P = 9;
        for (int i = 0; i < n; i++)
        {
            if (a[i].BT < a[short_P].BT && (a[i].AT <= t && a[i].BT > 0))
            {
                short_P = i;
            }
        }

        a[short_P].BT = a[short_P].BT - 1;
        if (a[short_P].BT == 0)
        {
            count++;
            a[short_P].CT = t + 1;
            a[short_P].TAT = t + 1 - a[short_P].AT;
            a[short_P].WT = a[short_P].TAT - temp[short_P];
            a[short_P].RT = t + 1 - a[short_P].AT - temp[short_P];
            a[0].RT = 0;
            total_WT = total_WT + a[short_P].WT;
            total_TAT = total_TAT + a[short_P].TAT;
        }
    }
    int max = a[0].CT;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i].CT)
        {
            max = a[i].CT;
        }
    }
    IT = max - sum_burst;
    Avg_WT = total_WT / n;
    Avg_TAT = total_TAT / n;
    printf("Id\tWT\tTAT\tRT\tCT\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\n", a[i].P_number, a[i].WT, a[i].TAT, a[i].RT, a[i].CT);
    }
    printf("Avg waiting time of the process is %f\n", Avg_WT);
    printf("Avg turn around time of the process %f\n", Avg_TAT);
    printf("Total Idle Time %d\n", IT);
    printf("CPU Utilization=> %d percent\n", (((max - IT) * 100 / max)));
    return 0;
}