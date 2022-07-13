#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,r;
    printf("Enter the numbers a,b,c,d::");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    r=(a+b)/(c-d);
    if((c-d)!=0)
    {

        printf("The ratio is::%d",r);
    }
    else
    {
        printf("Wrong numbers added");
    }
    getch();

}
