#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("The prime numbers are:\n");
    for(i=1;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("\n %d",i);
        }
    }
    getch();

}
