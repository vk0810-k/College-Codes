#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    char s2[50];
    printf("Enter string one::");
    scanf("%s",s1);
    strcpy(s2,s1);
    strrev(s1);
    printf("\nString one is:%s\n \nString two is:%s\n",s1,s2);
    if(strcmp(s1,s2)==0)
    {
        printf("\nThe strings are same!!!\n");
    }
    else
    {
        printf("\nThe strings are not same!!!\n");
    }
    return 0;
}
