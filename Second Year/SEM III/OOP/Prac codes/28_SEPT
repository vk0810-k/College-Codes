/*A publishing house maintains its publications in terms of physical copies i.e. the books as well as in terms of virtual copies
i.e. the video files. Create a class publication that stores the title and price of the publication.
From this class, derive two classes:
Book; which adds a page count (type int)
Video ; which adds the size of the file in MBs (type int)
Each of these three class must have a getdat() function to get the data from the user and a display() function to display the output.
WAP that can well depict the above scenario.
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

//2nd question
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
        cout<<"\nEnter your account number where you have to deposit the amount:";
        cin>>add_accno;
        accno = add_accno;
        cout<<"\nEnter the money you want to deposit:";
        cin>>add_bal;
        bal = add_bal;
    }
    void display()
    {
        cout<<"\nAccount Number: "<<accno;
        cout<<"\n\nMoney Deposited: "<<bal;
    }
};
class borrower:public depositor
{
    int add_lnno,add_lnamt;
    public:
    void getdat()
    {
        cout<<"\nEnter your loan number:";
        cin>>add_lnno;
        lnno = add_lnno;
        cout<<"\nEnter the loan money you want:";
        cin>>add_lnamt;
        lnamt = add_lnamt;
    }
    void display()
    {
        cout<<"\nLoan Number: "<<lnno;
        cout<<"\n\nLoan Amount: "<<lnamt;
    }
};
int main()
 {
  depositor d;
  borrower b;
  int x;
  d.customer::getdat();
  d.customer::display();
  cout<<"\n\nEnter your role as:";
  cout<<"\n1. Depositor";
  cout<<"\n2. Borrower";
  cout<<"\nEnter the number 1 or 2:";
  cin>>x;
  if(x == 1)
  {
      cout<<"\t Data Input";
      //d.customer::getdat();
      d.getdat();
  }
  else if(x == 2)
  {
      cout<<"\t Data Input";
      //b.customer::getdat();
      b.getdat();
  }
  else
  {
      cout<<"Plz enter a proper input !!!!!!!!!!!!!!!!!";
  }
  if(x == 1)
  {
      cout<<"\t Data Output";
      //d.customer::display();
      d.display();
  }
  else if(x == 2)
  {
      cout<<"\t Data Output";
      //b.customer::display();
      b.display();
  }
  return 0;
 }
