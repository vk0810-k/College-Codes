/*#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	int bsize[10], psize[10], bno, pno, flags[10], allocation[10], i, j;
	for(i = 0; i < 10; i++)
	{
		flags[i] = 0;
		allocation[i] = -1;
	}
	cout<<"Enter no. of blocks: ";
	cin>>bno;
	cout<<"\nEnter size of each block: ";
	for(i = 0; i < bno; i++)
    {
        cin>>bsize[i];
    }
	cout<<"\nEnter no. of processes: ";
	cin>>pno;
	cout<<"\nEnter size of each process: ";
	for(i = 0; i < pno; i++)
    {
        cin>>psize[i];
    }
	for(i = 0; i < pno; i++)
		for(j = 0; j < bno; j++)
			if(flags[j] == 0 && bsize[j] >= psize[i])
			{
				allocation[j] = i;
				flags[j] = 1;
				break;
			}
	cout<<"\nBlock no.\tsize\t\tprocess no.\t\tsize";
	for(i = 0; i < bno; i++)
	{
		cout<<"\n"<< i+1<<"\t\t"<<bsize[i]<<"\t\t";
		if(flags[i] == 1)
			cout<<allocation[i]+1<<"\t\t\t"<<psize[allocation[i]];
		else
			cout<<"Not allocated";
	}
	return 0;
}
*/
#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	int fragment[20],b[20],p[20],i,j,nb,np,temp,lowest=9999;
	static int barray[20],parray[20];
	cout<<"\nEnter the number of blocks:";
	cin>>nb;
	cout<<"Enter the number of processes:";
	cin>>np;
	cout<<"\nEnter the size of the blocks:-\n";
	for(i=1;i<=nb;i++)
    {
        cout<<"Block no."<<i<<":";
        cin>>b[i];
    }
	cout<<"\nEnter the size of the processes :-\n";
	for(i=1;i<=np;i++)
    {
        cout<<"Process no. "<<i<<":";
        cin>>p[i];
    }
	for(i=1;i<=np;i++)
	{
		for(j=1;j<=nb;j++)
		{
			if(barray[j]!=1)
			{
				temp=b[j]-p[i];
				if(temp>=0)
					if(lowest>temp)
					{
						parray[i]=j;
						lowest=temp;
					}
			}
		}
		fragment[i]=lowest;
		barray[parray[i]]=1;
		lowest=10000;
	}
	cout<<"\nProcess_no\tProcess_size\tBlock_no\tBlock_size\tFragment";
	for(i=1;i<=np && parray[i]!=0;i++)
		{
		    cout<<"\n"<<i<<"\t\t"<<p[i]<<"\t\t"<<parray[i]<<"\t\t"<<b[parray[i]]<<"\t\t"<<fragment[i];
		}
	return 0;
}
