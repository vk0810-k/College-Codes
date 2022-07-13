/*1ST QUESTION
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class Publication
{
    protected:
      int bookcnt, videomem;
      char booknm[30];
    public:
        void getdat()
        {
            cout<<"\nEnter Name of Book: ";
            gets(booknm);
        }
        void display()
        {
            cout<<"\nName of Book: "<<booknm;
        }
};

class Book : public Publication
{
    int add_page;
    public:
        void getdat()
        {
            cout<<"\nEnter number of pages of the book:";
            cin>>add_page;
            bookcnt = add_page;
        }
        void display()
        {
            cout<<"\nNumber of Pages: "<<bookcnt;
        }
};

class Video : public Publication
{
    int add_mem;
    public:
        void getdat()
        {
            cout<<"\nEnter memory of Video in MB's: ";
            cin>>add_mem;
            videomem = add_mem;
        }
        void display()
        {
            cout<<"\nTotal memory for the Video: "<<videomem<<" MB";
        }
};

int main()
{
    Book b;
    Video v;
    cout<<"\t Data Input";
    b.Publication::getdat();
    b.getdat();
    v.getdat();
    cout<<"\t Data Output";
    b.Publication::display();
    b.display();
    v.display();
    return 0;
}
*/

/*2nd question
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class customer
{
    protected:
        int custid,accno,bal,lnno,lnamt;
        char custnm[50];
    public:
        void getdat()
        {
            cout<<"\nEnter Name of Customer: ";
            gets(custnm);
        }
        void display()
        {
            cout<<"\nCustomer Name: "<<custnm;
        }
};
class depositor:public customer
{
    int add_accno,add_bal;
    public:
    void getdat()
    {
        cout<<"\nRole as a DEPOSITOR.....";
        cout<<"\nEnter your account number where you have to deposit the amount:";
        cin>>add_accno;
        accno = add_accno;
        cout<<"\nEnter the money you want to deposit:";
        cin>>add_bal;
        bal = add_bal;
    }
    void display()
    {
        cout<<"\n\nRole as a DEPOSITOR.....";
        cout<<"\nAccount Number: "<<accno;
        cout<<"\nMoney Deposited: "<<bal;
    }
};
class borrower:public depositor
{
    int add_lnno,add_lnamt;
    public:
    void getdat()
    {
        cout<<"\nRole as a BORROWER.....";
        cout<<"\nEnter your loan number:";
        cin>>add_lnno;
        lnno = add_lnno;
        cout<<"\nEnter the loan money you want:";
        cin>>add_lnamt;
        lnamt = add_lnamt;
    }
    void display()
    {
        cout<<"\n\nRole as a BORROWER.....";
        cout<<"\nLoan Number: "<<lnno;
        cout<<"\nLoan Amount: "<<lnamt;
    }
};
int main()
{
  depositor d;
  borrower b;
  cout<<"\t Data Input";
  d.customer::getdat();
  d.getdat();
  b.getdat();
  cout<<"\n\n\t Data Output";
  d.customer::display();
  d.display();
  b.display();
  return 0;
 }


//3RD QUESTION
#include<iostream>
#include<conio.h>
using namespace std;
class gpa
{
    public:
        int gp;
};
class rollno : public gpa
{
    public:
        int rno;
};
class sapid : public gpa
{
    public:
        int sid;
};
class year : public rollno,public sapid
{
    public:
        int yr;
};
int main()
{
    year yer;
    yer.rollno::gp = 40;
    yer.sapid::gp = 40;
    yer.rno = 16;
    yer.sid = 7036028;
    yer.yr = 2;
    cout<<"GPA from class rollno::"<<yer.rollno::gp;
    cout<<"\nGPA from class sapid::"<<yer.sapid::gp;
    cout<<"\nRoll No:"<<yer.rno;
    cout<<"\nSap ID:"<<yer.sid;
    cout<<"\nYear:"<<yer.yr;
    return 0;
}
*/


#include<iostream>
using namespace std;
class A
{
    int x;
    public:
        A(int i)
        {
           x=i;
        }
        void operator +(A);
};

void A :: operator +(A a)
{

    int m = x+a.x;
    cout<<"The result of the addition of two objects is: "<<m;

}
int main()
{
    A a1(5);
    A a2(4);
    a1+a2;  	//a1.operator+a2	:
    return 0;
}
