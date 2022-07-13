#include<conio.h>
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the 2 values::");
    scanf("%d %d",&a,&b);
    sum(a,b);
    subs(a,b);
    mul(a,b);
    div(a,b);
}
sum(int a,int b)
{
    int u;
    u=a+b;
    printf("The sum of %d and %d is::%d",a,b,u);
    return 0;
}
subs(int a,int b)
{
    int v;
    v=a-b;
    printf("\nThe substraction of %d and %d is::%d",a,b,v);
    return 0;
}
mul(int a,int b)
{
    int w;
    w=a*b;
    printf("\nThe multiplication of %d and %d is::%d",a,b,w);
    return 0;
}
div(int a,int b)
{
    int x;
    x=a/b;
    printf("\nThe division of %d and %d is::%d",a,b,x);
    return 0;
}
