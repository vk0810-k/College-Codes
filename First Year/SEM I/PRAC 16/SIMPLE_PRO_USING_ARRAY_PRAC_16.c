#include<stdio.h>
void main()
{
    int arr[10];
    printf("Enter array elements::");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements");
    for(int k=0;k<10;k++)
    {
        printf("%d\n",arr[k]);
    }
    getch();
}
