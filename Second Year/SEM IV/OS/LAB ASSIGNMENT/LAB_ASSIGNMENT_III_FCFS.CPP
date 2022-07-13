#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

	int bt[10]={0},at[10]={0},tat[10]={0},wt[10]={0},ct[10]={0};
	int n,sum=0;
	float tottat=0,totwt=0;
	printf("Enter number of processes: ");
	scanf("%d",&n);
	printf("Enter arrival time and burst time for each process\n\n");
	for(int i=0;i<n;i++)
	{
		printf("Arrival time of process[%d]::",i);
		scanf("%d",&at[i]);
		printf("Burst time of process[%d]::",i);
		scanf("%d",&bt[i]);
		printf("\n");
	}
	for(int j=0;j<n;j++)
	{
		sum+=bt[j];
		ct[j]+=sum;
	}
	for(int k=0;k<n;k++)
	{
		tat[k]=ct[k]-at[k];
		tottat+=tat[k];
	}
	for(int k=0;k<n;k++)
	{
		wt[k]=tat[k]-bt[k];
		totwt+=wt[k];
	}
	printf("\n\n");
	printf("P#\t AT\t BT\t CT\t TAT\t WT\t\n\n");
	for(int i=0;i<n;i++)
	{
		printf("P%d\t %d\t %d\t %d\t %d\t %d\n",i,at[i],bt[i],ct[i],tat[i],wt[i]);
	}
	printf("\n\nAverage Turnaround Time = %f\n",tottat/n);
	printf("Average WT = %f\n\n",totwt/n);
	return 0;
}
