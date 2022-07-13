#include<stdio.h>
int max(int a,int b)
{
if(a>b)
return a;
else
return b;
}
void knapsack(int m,int n,int w[],int p[])
{
int v[10][10],x[10],i,j;
for(i=0;i<=n;i++)
{
for(j=0;j<=m;j++)
{
if(j==0||i==0)
v[i][j]=0;
if(j-w[i]<0)
v[i][j]=v[i-1][j];
else
v[i][j]=max(v[i-1][j],v[i-1][j-w[i]]+p[i]);
}
}
for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
            printf("%d\t",v[i][j]);
        printf("\n");
    }
printf("THE OPTIMAL SOLUTION IS:%d",v[n][m]);
    for(i=1;i<=n;i++)
        x[i]=0;
    i=n;
    j=m;
    while(i>0 && j>0)
    {
        if(v[i][j]!=v[i-1][j])
        {
            x[i]=1;
            j=j-w[i];
        }
        i--;
    }
 printf("THE OPTIMAL SET OF WEIGHTS IS:");
    for(i=1;i<=n;i++)
        if(x[i]==1)
            printf("%d\t",i);
    printf("\n");
}

int main()
{
    int w[10],p[10],i,m,n;
    printf("ENTER THE NUMBER OF ITEMS:");
    scanf("%d",&n);
    printf("ENTER THE WEIGHTS OF THE ITEMS:");
    for(i=1;i<=n;i++)
        scanf("%d",&w[i]);
    printf("ENTER THE PROFITS OF THE ITEMS:");
    for(i=1;i<=n;i++)
        scanf("%d",&p[i]);
    printf("ENTER THE CAPACITY OF KNAPSACK:");
    scanf("%d",&m);
    knapsack(m,n,w,p);
    return 0;
}
