#include <stdio.h>
main ()
{
  int balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
   int *p;
   int i;
   p = balance;
   printf( "Array values using pointer\n");
   for ( i = 0; i < 5; i++ )
   {
      printf("(p + %d) : %d\n",  i, *(p + i) );
   }
   printf( "Array values using balance as address\n");
   for ( i = 0; i < 5; i++ )
   {
      printf("(balance + %d) : %d\n",  i, *(balance + i) );
   }
}
