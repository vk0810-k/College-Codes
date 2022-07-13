//if else statement
#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter 3 number::");
    scanf("%d %d %d",&x,&y,&z);
    if((x>y)&&(x>z))
    {
        printf("The largest number is: %d",&x);
    }
    else if((y>x)&&(y>z))
    {
        printf("The largest number is: %d",&y);
    }
    else if((z>y)&&(z>x))
    {
        printf("The largest number is: %d",&z);
    }
    return 0;
}
