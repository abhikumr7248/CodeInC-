#include <stdio.h>
struct process
{
    int p;
    int bt;
    int arr;
    int wait;
    int turn;
};
int main()
{
    int i, j, n, min, k = 1, btime = 0, ta = 0, sum = 0;
    float wavg = 0, tavg = 0, tsum = 0, wsum = 0;
    printf("\t\t\tShortest Job First Scheduling (Non - Preemptive)\n");
    printf("\nEnter the No. of processes :");
    scanf("%d", &n);
    struct process pr[n], temp;
    printf("Enter the arrival time and burst time of the processes:\n");
    for (i = 0; i < n; i++)
    {
        scanf(" %d %d", &pr[i].arr, &pr[i].bt);
        pr[i].p = i + 1;
    }
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n; j++)

        {

            if (pr[i].arr < pr[j].arr)

            {

                temp = pr[j];
                pr[j] = pr[i];
                pr[i] = temp;
            }
        }
    }

    for (j = 0; j < n; j++)

    {

        btime = btime + pr[j].bt;
        min = pr[k].bt;
        for (i = k; i < n; i++)
        {
            if (btime >= pr[i].arr && pr[i].bt < min)
            {
                temp = pr[k];
                pr[k] = pr[i];
                pr[i] = temp;
            }
        }

        k++;
    }

    pr[0].wait = 0;
    for (i = 1; i < n; i++)
    {

        sum = sum + pr[i - 1].bt;
        pr[i].wait = sum - pr[i].arr;
        wsum = wsum + pr[i].wait;
    }

    wavg = (wsum / n);
    for (i = 0; i < n; i++)
    {

        ta = ta + pr[i].bt;
        pr[i].turn = ta - pr[i].arr;
        tsum = tsum + pr[i].turn;
    }
    
    tavg = (tsum / n);
    printf("********");
    printf("\n RESULT:-");
    printf("\nProcess\t Burst\t Arrival\t Waiting\t Turn-around");
    for (i = 0; i < n; i++)
        printf("\n p%d\t %d\t %d\t\t %d\t\t\t%d", pr[i].p, pr[i].bt, pr[i].arr, pr[i].wait, pr[i].turn);

    printf("\n\nAVERAGE WAITING TIME : %f", wavg);
    printf("\nAVERAGE TURN AROUND TIME : %f", tavg);
    return 0;
}
