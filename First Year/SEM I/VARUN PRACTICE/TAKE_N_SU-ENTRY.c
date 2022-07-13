#include<conio.h>
#include<stdio.h>
struct stu
{
    char name[50];
    int roll;
    float marks[2];
} s[10];
int main()
{
    int i;
    printf("\t�nter the information of students:");
    for(i=0;i<10;++i)
    {
        s[i].roll=i+1;
        printf("\nFor roll number%d:",s[i].roll);
        printf("\nEnter name:");
        scanf("%s",s[i].name);
        printf("Enter the marks:");
        scanf("%f",&s[i].marks);
        printf("\n");
    }
    int avg=marks/10;
    printf("\tDisplay information:");
    for(i=0;i<10;++i)
    {
        printf("\nRoll number:%d",i+1);
        printf("\nName:");
        puts(s[i].name);
        printf("\nMarks:%f",s[i].marks);
        printf("\n");
    }
    printf("average is:%d",avg);
    return 0;
}
