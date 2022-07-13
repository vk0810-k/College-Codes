/*1ST QUESTION
#include<iostream>
using namespace std;
int main()
{
    int *x,*y;
    x = new int;  //new = allocation
    y = new int;
    cout<<"Enter value of x::";
    cin>>*x;
    cout<<"\nEnter value of y::";
    cin>>*y;
    cout<<"\nEntered value for x::"<< *x << endl;
    cout<<"\nEntered value for y::"<< *y << endl;
    delete x, y; //delete = deallocation
    return 0;
}
*/

/*2nd QUESTION
#include<iostream>
using namespace std;

int main()
{
    float principal_amt, rate, simple_interest;
    int time;
    cout<<"Enter the values of principal_amt::";
    cin>>principal_amt;
    cout<<"Enter the values of rate::";
    cin>>rate;
    cout<<"Enter the values of time::";
    cin>>time;
    simple_interest = (principal_amt * rate * time) / 100.0;
    cout<<"Amount = Rs."<<principal_amt<<"\n";
    cout<<"Rate = Rs."<<rate<<"\n";
    cout<<"Time = "<<time<<"years\n";
    cout<<"Simple interest = "<<simple_interest<<"\n";

    return 0;
}
*/

//3rd QUESTION
/*Case 1: using normal functions
#include<iostream>
using namespace std;
int main()
{
    char opertor;
    int x, y;
    cout<<"Enter an operator (+, -, *,): ";
    cin>>opertor;
    cout<<"Enter two operands: ";
    cin>>x>>y;

    switch (opertor)
    {
        case '+':
            cout<<x<<"+"<<y<<"="<<x + y;
            break;
        case '-':
            cout<<x<<"-"<<y<<"="<<x - y;
            break;
        case '*':
            cout<<x<<"*"<<y<<"="<<x * y;
            break;
        case '/':
            cout<<x<<"/"<<y<<"="<<x / y;
            break;
        default:
            cout<<"Error! operator is not correct";
    }
    return 0;
}


//Case 2: using Inline functions
#include <iostream>
using namespace std;
class operation
{
    int a,b,add,sub,mul;
    float div;
public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
};
inline void operation :: get()
{
    cout << "Enter first value:";
    cin >> a;
    cout << "Enter second value:";
    cin >> b;
}

inline void operation :: sum()
{
    add = a+b;
    cout << "Addition of two numbers: " << a+b << "\n";
}

inline void operation :: difference()
{
    sub = a-b;
    cout << "Difference of two numbers: " << a-b << "\n";
}

inline void operation :: product()
{
    mul = a*b;
    cout << "Product of two numbers: " << a*b << "\n";
}

inline void operation ::division()
{
    div=a/b;
    cout<<"Division of two numbers: "<<a/b<<"\n" ;
}

int main()
{
    operation s;
    s.get();
    s.sum();
    s.difference();
    s.product();
    s.division();
    return 0;
}
*/

//Case 3: using macros
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
#define ADD(X, Y) ( X + Y)
#define SUBTRACT(X, Y) (X - Y)
#define MULTIPLY(X, Y) (X * Y)
#define DIVIDE(X, Y) (X/Y)

int main()
{
    int a,b;
    int addition,subtraction,mul,division;
    addition = subtraction = mul = division = 0;
    cout<<"Enter two numbers:"<<"\n";
    cin>>a;
    cin>>b;
    addition = ADD(a, b);
    subtraction = SUBTRACT(a, b);
    mul = MULTIPLY(a, b);
    division = DIVIDE(a, b);
    cout<<"\n";
    cout<<"ANSWERS"<<"\n";
    cout<<"_________________________"<<"\n";
    cout<<"Addition ="<<addition<<"\n";
    cout<<"Subtraction ="<<subtraction<<"\n";
    cout<<"Multiplication ="<<mul<<"\n";
    cout<<"Division ="<<division<<"\n";
    return 0;
}

