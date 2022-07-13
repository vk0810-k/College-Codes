#include<conio.h>
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the 2 values::");
    scanf("%d %d",&a,&b);
    palin(a,b);
    fibo(a,b);
    fact(a,b);
    fullpyr(a,b);
}
palin(int a,int b)
{
    int n,rev= 0, remainder, org;
    n=b;
    org= a;
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
fibo(int a, int b)
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
    n=a+b;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
fact(int a, int b)
{

}
