#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("\t USING CALL BY REFERENCE METHOD \t");
    printf("\nEnter two numbers::");
    scanf("%d %d",&a,&b);
    printf("\nBEFORE SWAPPING \nA=%d \nB=%d",a,b);
    swap(&a,&b);
    printf("\nAFTER SWAPPING \nA=%d \nB=%d",a,b);

    return 0;
}
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
