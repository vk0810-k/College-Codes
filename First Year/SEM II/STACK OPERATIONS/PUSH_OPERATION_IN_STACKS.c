#include <stdio.h>
#include <stdlib.h>
#define MAX 3
int st[MAX], top=-1;

main()
{
    int x,val;
    printf("Enter the number:");
    scanf("%d",&x);
    if(top == MAX-1) //to check if the value is null or not
        printf("Stack Overflow");
    else
    {
        top = top + 1; //to increment the vLue by one for next iteration
        st[top] = val;
    }
    for(int i = top;i>=0;i--)
        printf("%d",st[i]);

}
