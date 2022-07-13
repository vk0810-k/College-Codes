#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
int main()
{
    int x,a,b;
    printf("\nEnter two values::");
    scanf("%d %d",&a,&b);
    printf("\tMAIN MENU");
    printf("\n1. CALL BY VALUE");
    printf("\n2. CALL BY REFERENCE");
    printf("\n Enter your choice:");
    scanf("%d",&x);
    printf("Before swapping A=%d B=%d",a,b);
    swap(&a,&b);
    if(x==1)
    {
        printf("\t USING CALL BY VALUE METHOD \t");
        void swap(a,b)
{
    int temp=a;
    a=b;
    b=temp;
}
    }
    else if(x==2)
    {
        printf("\t USING CALL BY REFERENCE METHOD \t");
        void swap(int *z,int *y)
{
    int temp=*z;
    *z=*y;
    *y=temp;
}
    }
    return 0;
}
