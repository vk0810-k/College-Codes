#include<stdio.h>
#include<conio.h>
int main()
{
    int n, rev= 0, remainder, org;
    printf("Enter an integer: ");
    scanf("%d",&n);
    org= n;
    // reversed integer is stored in variable
    while( n!=0 )
    {
        remainder = n%10;
        rev= rev*10 + remainder;
        n = n/10;
    }
    // palindrome if orignalInteger and reversedInteger are equal
    if (org == rev)
        printf("%d is a palindrome.", org);
    else
        printf("%d is not a palindrome.", org);

    return 0;
}
