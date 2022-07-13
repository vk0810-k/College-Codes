//1ST QUESTION
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
        cout<<"\n\n Name::"<<name;
        cout<<"\n\n Roll No.::"<<rno;
        cout<<"\n\n Division::"<<divs;
        cout<<"\n\n Average marks::"<<average_marks();
    }
};
int main()
{
    student s1,s2;
    cout<<"\tFor student 1";
    s1.accept_details();
    s1.average_marks();
    s1.display_details();
    cout<<"\n\n\tFor student 2";
    s2.accept_details();
    s2.average_marks();
    s2.display_details();
    return 0;
    getch();
}


/*2ND QUESTION
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
*/
