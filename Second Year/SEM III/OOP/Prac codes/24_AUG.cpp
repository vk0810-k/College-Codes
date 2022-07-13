/*Create a class Student having fields name, rollno, division, id and marks in 3 subjects.
The class also has three methods accept_details(),  average_marks() and display_details() as member procedures.
Accept the details of two students as command line arguments and Display their information.

#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    char name[20],divs[3];
    int rno,mk1,mk2,mk3;

    public:
    void accept_details()
    {
        cout<<"\t Enter the Inputs";
        cout<<"\n Enter your name::";
        cin>>name;
        cout<<"\n Enter the roll number::";
        cin>>rno;
        cout<<"\n Enter the marks in the 3 subjects::";
        cin>>mk1>>mk2>>mk3;
        cout<<"\n Enter the division::";
        cin>>divs;
    }
    double average_marks()
    {
        return (mk1+mk2+mk3)/3;
    }
    void display_details()
    {
        cout<<"\t The result";
        cout<<"\n Name::"<<name;
        cout<<"\n Roll No.::"<<rno;
        cout<<"\n Division::"<<divs;
        cout<<"\n Average marks::"<<average_marks();
    }
}s;
int main()
{
    s.accept_details();
    s.average_marks();
    s.display_details();
    return 0;
    getch();
}
*/

/*Write a program by creating an 'Employee' class having the following methods and print the final salary.

	1 - 'getInfo()' which takes the employee Id, his salary and number of hours of work per day of employee as parameter

	2 - 'AddSal()' which adds $10 to salary of the employee if it is less than $500.

	3 - 'AddWork()' which adds $5 to salary of employee if the number of hours of work per day is more than 6 hours.
*/

#include<iostream>
#include<conio.h>
using namespace std;

class employee
{
    char emp_id[23];
    int salary,hrs;

    public:
    void getInfo()
    {
        cout<<"\t EMPLOYEE DETAILS INPUT";
        cout<<"\n Employee id::";
        cin>>emp_id;
        cout<<"\n Salary in dollars::";
        cin>>salary;
        cout<<"\n Enter the number of working hours per day::";
        cin>>hrs;
    }
    double Addsal()
    {
        if(salary<500)
            salary = salary + 10;
            return salary;
    }
    double Addwork()
    {
        if(hrs>6)
            salary =  salary + 5;
            return salary;
    }
    void DispInfo()
    {
        cout<<"\t EMPLOYEE DETAILS OUTPUT";
        cout<<"\n Employee id::"<<emp_id;
        cout<<"\n Salary::"<<salary;
        cout<<"\n Number of working hours::"<<hrs;
    }
}emp;
int main()
{
    emp.getInfo();
    emp.Addsal();
    emp.Addwork();
    emp.DispInfo();
    return 0;
    getch();
}
