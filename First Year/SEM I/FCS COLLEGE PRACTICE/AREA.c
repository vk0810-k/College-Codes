#include<conio.h>
#include<stdio.h>
void main()
{
 int n1,n2,n3;
 printf("Enter the three numbers:");
 scanf("%d %d %d",&n1,&n2,&n3);
 if(n1>=n2)
 {
     if(n1>=n3)
        printf("The largest number is:%d",n1);
     else
        printf("The largest number is:%d",n3);
 }
 else
 {
     if(n2>=n3)
        printf("The largest number is:%d",n2);
     else
        printf("The largest number is:%d",n3);
 }
 getch();
}
