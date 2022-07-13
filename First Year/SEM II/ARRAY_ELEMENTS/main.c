#include <stdio.h>
#include <stdlib.h>

main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    printf("The array elements are:\n");
    for(int i=0;i<x;i++)
    {
        printf("\n%d",i);
    }
}
