#include "stdio.h"
struct process
{
    int IT;
    int AT;
    int BT;
    int TAT;
    int WT;
    int CT;
    int RT;
    int P_number;
};

int main()
{
    int n;
    printf("how many process you want to enter: ");
    scanf("%d", &n);
    struct process p[n], min;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the AT for process %d :", i + 1);
        scanf("%d", &p[i].AT);
        printf("Enter the BT for the process %d :", i + 1);
        scanf("%d", &p[i].BT);
        p[i].P_number = i + 1;
    }

    int avg_TAT = 0, avg_WT = 0, avg_RT = 0, avg_CT = 0, TT_IT = 0;
    min = p[0];
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (p[i].AT > p[j].AT)
            {

                min = p[i];
                p[i] = p[j];
                p[j] = min;
            }
        }
    }
    int c_pev = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i].AT <= c_pev)
        {
            p[i].CT = c_pev + p[i].BT;
            c_pev = p[i].CT;
            p[i].TAT = p[i].CT - p[i].AT;
            p[i].WT = p[i].TAT - p[i].BT;
            p[i].RT = p[i].CT - p[i].BT - p[i].AT;
        }
        else if (p[i].AT > c_pev)
        {
            p[i].IT = p[i].AT - c_pev;
            TT_IT += p[i].IT;
            p[i].CT = c_pev + p[i].BT + p[i].IT;
            c_pev = p[i].CT;
            p[i].TAT = p[i].CT - p[i].AT;
            p[i].WT = p[i].TAT - p[i].BT;
            p[i].RT = p[i].CT - p[i].BT - p[i].AT;
        }
    }
    for (int i = 0; i < n; i++)
    {
        avg_TAT += p[i].TAT;
        avg_WT += p[i].WT;
        avg_CT += p[i].CT;
        avg_RT += p[i].RT;
    }
    printf("PID\tAT\tBT\tTAT\tCT\tWT\tRT\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n", p[i].P_number, p[i].AT, p[i].BT, p[i].TAT, p[i].CT, p[i].WT, p[i].RT);
    }
    printf("\n");
    printf("\n");
    printf("The average Turn ariund time is  %.3f  unit of time\n", (float)avg_TAT / n);
    printf("The average Waiting time is  %.3f  unit of time\n", (float)avg_WT / n);
    printf("The average Response time is  %.3f  unit of time\n", (float)avg_RT / n);
    printf("The average Completion time is  %.3f  unit of time\n", (float)avg_CT / n);
    printf("\nCPU UTILIZATION=> %.3f percent\n", (float)((p[n - 1].CT - TT_IT) * 100) / p[n - 1].CT);
    return 0;
}
