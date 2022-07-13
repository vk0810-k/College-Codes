/* extern variable
#include<stdio.h>
int g;
void print()
{
    g = 10;
    printf("g = %d\n",g);
}
int main()
{
    g = 7;
    printf("g = %d\n",g);
    print();
    return 0;
}
print(g);
*/

/* static variable
#include<stdio.h>
static int g = 5;
void fn()
{
    static int i = 0;
    printf("g = %d\t",g--);
    printf("i = %d\n",i++);
}
int main()
{
    while(g >= 2)
        fn();
    return 0;
}
*/
/* register variable
#include<stdio.h>
int main()
{
    register int n = 20;
    int *ptr;
    ptr = &n;
    printf("address of n is : %u",ptr);
    return 0;
};
*/
/* auto variable
#include <stdio.h>
int sum(int n1, int n2){
 auto int s; //declaration of auto(local) variable
 s = n1+n2;
 return s;
}
int main(){
 int i = 2, j = 3, k;
k = sum(i, j);
 printf("sum is : %d\n", k);
 return 0;
}
*/
/*extern varaible
#include <stdio.h>
int g;
void print(){
 g = 10;
 printf("g = %d\n", g);
}
int main(){
 g = 7;
  printf("g = %d\n", g);
 print();
 return 0;
}
*/
/*
#include <stdio.h>
int main()
{
 register int n = 20;
 int *ptr;
 ptr = &n;
 printf("address of n : %u", ptr);
 return 0;
}
*/
/* pointer
#include <stdio.h>
int main()
{
 int a = 10;
 int *b;
 b = &a;
 printf("b = %u\n", b);
 printf("*b = %d\n", *b);
 printf("&b = %u\n", &b);
 printf("*&b = %u\n", *&b);
 return 0;
}
*/
array
#include <stdio.h>
int main()
{
 int marks[3];
 float average;
 printf("Enter marks of first student\n");
 scanf(" %d" , &marks[0]);
 printf("Enter marks of second student\n");
 scanf(" %d" , &marks[1]);
 printf("Enter marks of third student\n");
 scanf(" %d" , &marks[2]);
 average = (marks[0] + marks[1] + marks[2]) / 3.0;
 printf ("Average marks : %f\n" , average);
 return 0;
}

