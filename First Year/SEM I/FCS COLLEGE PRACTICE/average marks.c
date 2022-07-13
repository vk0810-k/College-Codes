#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y;
    printf("enter your marks");
    scanf("%d",&x);
    if(x>=80 && x<=100)
    {
        printf ("honours");

    }
    else if (x>= 60 && x<=79)
    {
        printf("first div");

    }
    else if (x>=50 && x<=59)
    {
        printf("second div");
    }
    else if (x>=40 && x<=49)
    {
        printf("third div");

    }
    else if (x>=0 && x<=39)
    {
        printf("fail");

    }
    else
        printf
        ("enter again");
    getch();

}
