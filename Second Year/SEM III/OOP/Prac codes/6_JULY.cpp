//6 July

#include<conio.h>
#include<stdio.h>
void main()
{
 int marks;
 printf("Enter your MARKS between 0-100::\n");
 scanf("%d",marks);
 if(marks>=90)
 {
     printf("Your grade is A/n");
 }
 else if(marks>=70)
 {
     printf("Your grade is B/n");
 }
 else if(marks>=50)
 {
     printf("Your grade is C");
 }
 else
 {
     printf("Your grade is D");
 }
 getch();
}


#include <stdio.h>
int main()
{
   int i, j, a, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &a);
   for (i = 1; i <= a; ++i, k = 0) {
      for (space = 1; j <= a - i; ++j) {
         printf("  ");
      }
      while (k != 2*i-1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}



#include <iostream>
using namespace std;

int main()
{
    int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
    return 0;
}
