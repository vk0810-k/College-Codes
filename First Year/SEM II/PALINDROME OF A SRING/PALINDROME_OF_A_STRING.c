#include<conio.h>
#include<stdio.h>
#include<string.h>
main()

{
    char x[10],y[10];
    printf("Enter string::");
    scanf("%s",x);
    strcpy(y,x);
    strrev(y);
    printf("Palindromed String:: %s",y);
    if(strcmp(y,x) == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
}
