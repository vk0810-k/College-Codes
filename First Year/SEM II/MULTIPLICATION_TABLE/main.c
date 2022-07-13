#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
   printf("Enter the number:");
   scanf("%d",&x);
   printf("/t MULTIPLICATION TABLE");
   for(int y=0;y<=12;y++)
   {
       printf("\n%d*%d=%d",x,y,x*y);
   }
}
