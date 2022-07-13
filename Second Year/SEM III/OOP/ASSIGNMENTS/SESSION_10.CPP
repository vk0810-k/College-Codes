/*1st QUESTION
#include<iostream>
using namespace std;
template <class T>
T myMax(T x, T y)
{
    return (x > y)? x: y;
}

int main()
{
    int x,y;
    cout<<"Enter two Numbers::";
    cin>>x>>y;
    cout<<"\n";
    cout<<"The largest number is::"<< myMax<int> (x, y) << endl;
    return 0;
}
*/

/*2ND QUESTION
#include<iostream>
#include<stdio.h>
using namespace std;
template <typename T>
void Swap(T &x, T &y)
{
        T temp;
        temp = x;
        x = y;
        y = temp;
}

int main()
{
        int x,y;
        cout<<"Enter the number which you have to perform swap function::";
        cin>>x>>y;
        cout<<"Before passing data to function template.\n";
        cout<<"x = "<<x<<"\ny = "<<y;
        Swap<int>(x,y);
        cout<<"\n\nAfter passing data to function template.\n";
        cout <<"x = "<<x<<"\ny = "<<y;
        return 0;
}
*/

/*3rd QUESTION
#include<iostream>
using namespace std;
template <class T>
T myMax(T x1, T x2)
{
    return (x1 > x2)? x1: x2;
}

int main()
{
    int x,y;
    float a,b;
    cout<<"Enter two integer type Numbers::";
    cin>>x>>y;
    cout<<"\n";
    cout<<"The largest number from the given two integers is::"<< myMax<int> (x, y) << endl;
    cout<<"\n\nEnter two floating type Numbers::";
    cin>>a>>b;
    cout<<"\n";
    cout<<"The largest number from the given two integers is::"<< myMax<float> (a, b) << endl;
    return 0;
}
*/

//4TH QUESTION
#include<iostream>
using namespace std;
template<class T>
class cal
{
    private:
        T num1,num2;
    public:
        cal(T x, T y)
        {
            num1 = x;
            num2 = y;
        }
        void displayResult()
        {
            cout << "The Numbers entered are: " << num1 << " and " << num2 << "." << endl;
            cout << "Addition of "<<num1<<" and "<<num2<<" is: " << add() << endl;
            cout << "Subtraction of "<<num1<<" and "<<num2<<" is: " << subtract() << endl;
            cout << "Product of "<<num1<<" and "<<num2<<" is: " << multiply() << endl;
            cout << "Division of "<<num1<<" and "<<num2<<" is: " << divide() << endl;
        }
        T add()
        {
            return num1 + num2;
        }
        T subtract()
        {
            return num1 - num2;
        }
        T multiply()
        {
            return num1 * num2;
        }
        T divide()
        {
            return num1 / num2;
        }
};
int main()
{
    int x,y;
    cout<<"Enter 2 numbers::";
    cin>>x>>y;
    cal<int> intCal(x, y);
    intCal.displayResult();
    return 0;
}
