#include<conio.h>
#include<stdio.h>
void main()
{
    char gender;
    int balance,bonus;
    printf("Enter Gender:");
    scanf("%c",&gender);
    printf("Enter Balance:");
    scanf("%d",&balance);
    if(gender=='f')
    {
        if(balance>5000)
            bonus=0.05*balance;

    }
    else
    {
        bonus=0.02*balance;
    }
    balance=balance+bonus;
    printf("The balance is:%d",balance);
    getch();
}
