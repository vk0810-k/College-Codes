#include<iostream>
#include<stdio.h>
using namespace std;

void wt(int pr[],int n,int bt[],int wt[],int at[])
{
    wt[0] = 0;
    for(k=0;k<n;k++)
        {
             wt[k] = tat[k] - bt[k];
             total_wt = total_wt + wt[k];
        }
}

void tat(int pr[],int n,int bt[],int wt[],int tat[],int at[])
{
    tat[0] = 0;
    for(int i=0;i<n;i++)
        {
            tat[i] = ct[i] - at[i];
            total_tat = total_tat + tat[i];
        }
}

void ct(int pr[],int n,int ct[],int sum = 0,int at[])
{
    ct[0] = 0;
    for(int i=0;i<n;i++)
        {
            sum = sum + bt[i];
            ct[i] = ct[i] + sum;
        }
}

void avg( int pr[], int n, int bt[],int at[])
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
    wt(pr, n, bt, wt,at);
    tat(pr, n, bt, wt, tat,at);
    ct(pr[],n,ct[],sum = 0,at)
    for (int  i=0; i<n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
    }
    int s=(float)total_wt / (float)n;
    int t=(float)total_tat / (float)n;
    printf("Average waiting time = %d",s);
    printf("\n");
    printf("Average turn around time = %d ",t);
}

int main()
{
    int pr[] = {0,1,2,3,4};
    int n = sizeof pr / sizeof pr[0];
    int bt[] = {2,6,4,9,12};
    int at[] = {0,1,2,3,4};
    findavgTime(pr,n,bt,at);
    return 0;
}
