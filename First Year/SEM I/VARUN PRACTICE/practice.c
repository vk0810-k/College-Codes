#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("1\n");
    }
    getch();
}
