#include<conio.h>
#include<stdio.h>
main()
{
    int a,b,*p1,*p2,x,y,z;
    a=12;
    b=4;
    p1=&a;
    p2=&b;
    x=*p1 * *p2 - 6;
    y=4* - *p2 / *p1 + 10;
    printf("The address of a is:%u\n",p1);
    printf("The address of b is:%u\n",p2);
    printf("\n");
    printf("a=%d , b=%d\n",a,b);
    printf("x=%d , y=%d\n",x,y);
    *p2 = *p2 + 3;
    *p1 = *p2 - 5;
    z = *p1 * *p2 - 6;
    printf("\na=%d , b=%d\n",a,b);
    printf("z=%d\n",z);
}
