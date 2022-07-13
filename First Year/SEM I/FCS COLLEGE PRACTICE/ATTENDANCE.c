#include<conio.h>
#include<stdio.h>
void main()
{
    float x,y,z;
    printf("Enter number of class in total:/n");
    scanf("%f",&x);
    printf("Enter number of classes attended:/n");
    scanf("%f",&y);
    z=(y/x)*100;
    if(z > 70)
    {
        printf("The attendance is:%f",z);
        printf("U r able to attend test");
    }
    else
    {
        printf("NIKAL!!!!!!!!!!!PEHLI FURDAT ME NIKAL!!!!!!!");
    }
    getch();
}
