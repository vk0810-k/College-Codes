#include<conio.h>
#include<stdio.h>
main()
{
    int n=1;
    numprint(n);
}
int numprint(int n)
{
    if(n<=50)
    {
        printf("%d\n",n);
        numprint(n+1);
    }
}
