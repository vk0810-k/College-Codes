#include<stdio.h>
#include<conio.h>
struct sal
{
    char name[50];
    char department[50];
    struct sal_breakdown
    {
        int dearness;
        int house_rent;
        char city[50];
    }allowance;
}employee;
main()
{
    printf("Enter Name:");
    scanf("%s",employee.name);
    printf("\nEnter Department:");
    scanf("%s",employee.department);
    printf("\nEnter Dearness out of 5:");
    scanf("%d",&employee.allowance.dearness);
    printf("\nEnter House Rent:");
    scanf("%d",&employee.allowance.house_rent);
    printf("\nEnter City name:");
    scanf("%s",employee.allowance.city);
    printf("\nNAME:%s",employee.name);
    printf("\nDEPARTMENT:%s",employee.department);
    printf("\nDEARNESS:%d",employee.allowance.dearness);
    printf("\nHOUSE RENT:%d",employee.allowance.house_rent);
    printf("\nCITY:%s",employee.allowance.city);
}
