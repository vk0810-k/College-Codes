/*#include<stdio.h>
#include<conio.h>
main()
{
    int x,y,r=0,a;
    printf("Enter the Number");
    scanf("%d",&x);
    y = x;
    while(y!=0)
    {
        a = y % 10;
        r += a*a*a;
        y /= 10;
    }
    if(r == x)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
}
*/
//for n numbers
#include<stdio.h>
#include<conio.h>
main()
{
    int x,y,r=0,a,n=0;
    printf("Enter the Number");
    scanf("%d",&x);
    y = x;
    while (y != 0)
    {
        y /= 10;
        ++n;
    }
    y = x;
    while(y!=0)
    {
        a = y % 10;
        r += pow(a,n);
        y /= 10;
    }
    if((int)r == x)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
}
