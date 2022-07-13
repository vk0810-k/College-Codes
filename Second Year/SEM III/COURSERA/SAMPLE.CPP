#include <stdio.h>
int main()
{
    int i, x, n1 = 0, n2 = 1, y;
    printf("Enter the number of terms: ");
    scanf("%d", &x);
    printf("Fibonacci Series: ");

    for (i = 1; i <= x; ++i)
        {
            printf("%d, ", n1);
            y = n1 + n2;
            n1 = n2;
            n2 = y;
        }

    return 0;
}
