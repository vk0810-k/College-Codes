#include <iostream>
#include<conio.h>
using namespace std;

class student {
protected:
    int rno, m1, m2; //information regarding student is kept protected but not private as it is needed for another functions
public:
    //Input of data is public
    void get()
     {
        cout << "Enter the Roll no :";
        cin>>rno;
        cout << "Marks 1: ";
        cin >> m1;
        cout << "Marks 2: ";
        cin>>m2;
    }
private:
    int sap_id;
    // important information like SAP id, is kept private
};

class additional_subject {
protected:
    int as; // marks of additional subject is kept protected
public:

    void getsm() {
        cout << "\nEnter the additional_subject mark :";
        cin>>as;

    }
};

class calculation : public student, public additional_subject
 {
    int total, avg;
public:

    void display() {
        total = (m1 + m2 + as);
        avg = total / 3;
        cout << "\n\n\tRoll No    : " << rno << "\n\tTotal      : " << total;
        cout << "\n\tAverage    : " << avg;
    }
};

int main() {

    calculation obj;
    obj.get();
    obj.getsm();
    obj.display();

}
