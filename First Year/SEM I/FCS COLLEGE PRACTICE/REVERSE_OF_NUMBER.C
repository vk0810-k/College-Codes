#include<conio.h>
#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        int d=n%10;
        rev=(rev*10)+d;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}
