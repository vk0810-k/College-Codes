#include <stdio.h>
void myfuncn( int *var1, int var2)
{
    for(int x=0; x<var2; x++)
    {
        printf("Value of var_arr[%d] is: %d \n", x, *var1);
        var1++;
    }
}

int main()
{
     int var_arr[] = {11, 22, 33, 44, 55, 66, 77};
     myfuncn(var_arr, 7);
     return 0;
}
