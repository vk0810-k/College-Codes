#include<conio.h>
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the any character::");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("Its a vowel");
    }


    else if(ch=='!'||ch=='@'||ch=='#'||ch=='$'||ch=='%'||ch=='^'||ch=='&'||ch=='&'||ch=='*'||ch=='+'||ch=='-'||ch=='/'||ch=='?')
    {
        printf("Its a special character");
    }
    else if(ch>=0 && ch<=100)
    {
        printf("Its an integer");
    }
    else
    {
        printf("kuch toh likh!!!!!!!!!!!!!!");
    }
    getch();
}
