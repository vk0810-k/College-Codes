/*
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,n,p[10]={1,2,3,4,5,6,7,8,9,10},min,k=1,btime=0,bt[10],temp,j,at[10],wt[10],tt[10],ta=0,sum=0;
    float wavg=0,tavg=0,tsum=0,wsum=0;

    printf("Enter the No. of processes :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the arrival time of process[%d]::",i+1);
        scanf(" %d",&at[i]);
        printf("\nEnter the burst time of process[%d]::",i+1);
        scanf(" %d",&bt[i]);
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(at[i]<at[j])
            {
                temp=p[j];
                p[j]=p[i];
                p[i]=temp;
                temp=at[j];
                at[j]=at[i];
                at[i]=temp;
                temp=bt[j];
                bt[j]=bt[i];
                bt[i]=temp;
            }
        }
    }

    for(j=0;j<n;j++)
    {
        btime=btime+bt[j];
        min=bt[k];
        for(i=k;i<n;i++)
        {
            if (btime>=at[i] && bt[i]<min)
            {
            temp=p[k];
            p[k]=p[i];
            p[i]=temp;
            temp=at[k];
            at[k]=at[i];
            at[i]=temp;
            temp=bt[k];
            bt[k]=bt[i];
            bt[i]=temp;
            }
        }
        k++;
    }
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        sum=sum+bt[i-1];
        wt[i]=sum-at[i];
        wsum=wsum+wt[i];
    }

    wavg=(wsum/n);
    for(i=0;i<n;i++)
    {
        ta=ta+bt[i];
        tt[i]=ta-at[i];
        tsum=tsum+tt[i];
    }

    tavg=(tsum/n);


    printf("\n RESULT:-");
    printf("\nP#\t AT\t BT\t WT\t TAT" );
    for(i=0;i<n;i++)
    {
        printf("\np%d\t %d\t %d\t %d\t %d",p[i],at[i],bt[i],wt[i],tt[i]);
    }

    printf("\n\nAVERAGE TURN AROUND TIME : %f",tavg);
    printf("\nAVERAGE WAITING TIME : %f",wavg);
    return 0;
}
*/

#include<iostream>
#include<string.h>
using namespace std;
struct process
{
      char process_name;
      int arrival_time, burst_time, ct, waiting_time, turnaround_time, priority;
      int status;
}process_queue[10];

int limit;

void Arrival_Time_Sorting()
{
      struct process temp;
      int i, j;
      for(i = 0; i < limit - 1; i++)
      {
            for(j = i + 1; j < limit; j++)
            {
                  if(process_queue[i].arrival_time > process_queue[j].arrival_time)
                  {
                        temp = process_queue[i];
                        process_queue[i] = process_queue[j];
                        process_queue[j] = temp;
                  }
            }
      }
}

int main()
{
      int i, time = 0, burst_time = 0, largest;
      char c;
      float wait_time = 0, turnaround_time = 0, average_waiting_time, average_turnaround_time;
      printf("\nEnter Total Number of Processes:\t");
      scanf("%d", &limit);
      for(i = 0, c = 'A'; i < limit; i++, c++)
      {
            process_queue[i].process_name = i;
            printf("\nEnter Details For Process[%d]:\n", process_queue[i].process_name);
            printf("Enter Arrival Time:\t");
            scanf("%d", &process_queue[i].arrival_time );
            printf("Enter Burst Time:\t");
            scanf("%d", &process_queue[i].burst_time);
            printf("Enter Priority:\t");
            scanf("%d", &process_queue[i].priority);
            process_queue[i].status = 0;
            burst_time = burst_time + process_queue[i].burst_time;
      }
      Arrival_Time_Sorting();
      process_queue[9].priority = -9999;
      printf("\nProcess Name\tArrival Time\tBurst Time\tPriority\tWaiting Time");
      for(time = process_queue[0].arrival_time; time < burst_time;)
      {
            largest = 9;
            for(i = 0; i < limit; i++)
            {
                  if(process_queue[i].arrival_time <= time && process_queue[i].status != 1 && process_queue[i].priority > process_queue[largest].priority)
                  {
                        largest = i;
                  }
            }
            time = time + process_queue[largest].burst_time;
            process_queue[largest].ct = time;
            process_queue[largest].waiting_time = process_queue[largest].ct - process_queue[largest].arrival_time - process_queue[largest].burst_time;
            process_queue[largest].turnaround_time = process_queue[largest].ct - process_queue[largest].arrival_time;
            process_queue[largest].status = 1;
            wait_time = wait_time + process_queue[largest].waiting_time;
            turnaround_time = turnaround_time + process_queue[largest].turnaround_time;
            printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d", process_queue[largest].process_name, process_queue[largest].arrival_time, process_queue[largest].burst_time, process_queue[largest].priority, process_queue[largest].waiting_time);
      }
      average_waiting_time = wait_time / limit;
      average_turnaround_time = turnaround_time / limit;
      printf("\n\nAverage waiting time:\t%f\n", average_waiting_time);
      printf("Average Turnaround Time:\t%f\n", average_turnaround_time);
      return 0;
}
