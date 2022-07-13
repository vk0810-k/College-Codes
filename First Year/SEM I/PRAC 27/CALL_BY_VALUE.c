#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("\t USING CALL BY VALUE METHOD \t");
    printf("\nEnter two numbers::");
    scanf("%d %d",&a,&b);
    printf("\nBEFORE SWAPPING \nA=%d \nB=%d",a,b);
    swap(a,b);
    return 0;
}
void swap(a,b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("\nAFTER SWAPPING \nA=%d \nB=%d",a,b);
}
