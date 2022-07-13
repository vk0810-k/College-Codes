#include<stdio.h>
#include<conio.h>
int main()
{
    int a1[50], a2[50], s1, s2, i, k, m[100];
    printf("Enter Array 1 Size: ");
    scanf("%d", &s1);
    printf("Enter Array 1 Elements: ");
    for(i=0; i<s1; i++)
    {
        scanf("%d", &a1[i]);
        m[i] = a1[i];
    }
    k = i;
    printf("\nEnter Array 2 Size: ");
    scanf("%d", &s2);
    printf("Enter Array 2 Elements: ");
    for(i=0; i<s2; i++)
    {
        scanf("%d", &a2[i]);
        m[k] = a2[i];
        k++;
    }
    printf("\nThe new array after merging is:\n");
    for(i=0; i<k; i++)
        printf("%d ", m[i]);
    getch();
    return 0;
}
