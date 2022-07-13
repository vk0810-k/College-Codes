#include<conio.h>
#include<stdio.h>
struct stu
{
    int m1,m2,m3,total;
    float mean;
    char name[10];
}stu[10];
main()
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("\nEnter the name and marks in 3 subjects:");
        scanf("%s %d %d %d",stu[i].name,&stu[i].m1,&stu[i].m2,&stu[i].m3);
        stu[i].total=stu[i].m1+stu[i].m2+stu[i].m3;
        stu[i].mean=(stu[i].m1+stu[i].m2+stu[i].m3)/3;
        printf("\nTotal is:%d\nMean is:%f",stu[i].total,stu[i].mean);
    }
}
