#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

void ctime(int n,int bt[],int ct[])
{
    int sum = 0;
    ct[0] = 0;
    for(int i=0;i<n;i++)
	{
	    sum = sum + bt[i];
	    ct[i] = ct[i] + sum;
	}
}

void wtime(int n,int bt[],int wt[],int tat[])
{
    wt[0] = 0;
    for(int i=0;i<n;i++)
	{
	     wt[i] = tat[i] - bt[i];
	}
}

void tatime(int n,int tat[],int art[],int ct[])
{
    tat[0] = 0;
    for(int i=0;i<n;i++)
	{
	    tat[i] = ct[i] - art[i];
	}
}

void avg(int n, int bt[],int art[])
{
    int wt[50],tat[50],ct[50],total_wt = 0,total_tat = 0;
    ctime(n,bt,ct);
    wtime(n,bt,wt,tat);
    tatime(n,tat,art,ct);
    for (int  i=0; i<n; i++)
    {
	total_wt = total_wt + wt[i];
	total_tat = total_tat + tat[i];
    }
    int s=total_wt/n;
    int t=total_tat/n;
    printf("Average waiting time = %d",s);
    printf("\n");
    printf("Average turn around time = %d ",t);
}

int main()
{
    int pr[] = {0,1,2,3,4};
    int n = 5;
    int bt[] = {2,6,4,9,12};
    int art[] = {0,1,2,3,4};
    avg(n,bt,art);
    return 0;
}
