
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
