#include<conio.h>
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
main()
{
    int x,y;
    printf("Enter the two numbers:\n");
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("First Number:%d\n",x);
    printf("Second Number:%d\n",y);
}
