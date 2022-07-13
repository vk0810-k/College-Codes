//QUESTION 1
#include<iostream>
#include<string>
using namespace std;

class roll_no;

class final_data
{
    public:
        void display(roll_no obj);
};

class roll_no
{
    int x;
    public:
        roll_no()
        {
           x = 16;
        }
        friend void final_data::display(roll_no);
};

void final_data::display(roll_no obj)
{
    cout << obj.x << endl;
}

int main()
{
    roll_no rn;
    final_data fd;
    fd.display(rn);
    return 0;
}


/*2ND QUESTION
#include<iostream>
using namespace std;
class student_report
{
    public:
        char name[30];
        int x,y,z;
        void student_data();
        void marks();
        void final_data();
};
void student_report :: student_data()
{

    cout<<"Enter the name::";
    cin>>name;
}
void student_report :: marks()
{

    cout<<"\nEnter marks in subject 1:";
    cin>>x;
    cout<<"\nEnter marks in subject 2:";
    cin>>y;
    cout<<"\nEnter marks in subject 3:";
    cin>>z;
}
void student_report :: final_data()
{
    this ->student_data();
    this ->marks();
    cout<<"\n";
    cout<<"\t THE STUDENT REPORT";
    cout<<"\nName of student::"<<name;
    cout<<"\nMarks in subject 1::"<<x;
    cout<<"\nMarks in subject 2::"<<y;
    cout<<"\nMarks in subject 3::"<<z;
}
int main()
{
    student_report sr;
    sr.final_data();
    return 0;
}
*/

/*3rd Question
#include<iostream>
using namespace std;
class electricity_bill
{
    int user_id,ut_cd,amt;
    public:
        char name[12];
        void read()
        {
        cout<<"\nEnter the user id ::";
        cin>>user_id;
        cout<<"\nEnter the name of the user::";
        cin>>name;
        cout<<"\nEnter the units consumed::";
        cin>>ut_cd;
        }
        void cal_tariff();
        void display();
};
void electricity_bill :: cal_tariff()
{
    if (ut_cd <= 100)
    {
        amt = ut_cd * 10;
    }
    else if (ut_cd <= 200)
    {
        amt = (100 * 10) +
               (ut_cd - 100) * 15;
    }
    else if (ut_cd <= 300)
    {
        amt = (100 * 10) +
               (100 * 15) +
               (ut_cd - 200) * 20;
    }
    else if (ut_cd > 300)
    {
        amt = (100 * 10) +
               (100 * 15) +
               (100 * 20) +
               (ut_cd - 300) * 25;
    }
}
void electricity_bill :: display()
{
    this -> read();
    this -> cal_tariff();
    cout<<"\n";
    cout<<"\tThe Electricity bill data";
    cout<<"\nUser id::"<<user_id;
    cout<<"\nName of the user::"<<name;
    cout<<"\nUnits consumed::"<<ut_cd;
    cout<<"\nElectricity bill::"<<amt;

}
int main()
{
    electricity_bill eb;
    eb.display();
    return 0;
}
*/
