/*1ST QUESTION
#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter number 1::";
    cin>>x;
    cout<<"Enter number 2::";
    cin>>y;
    cout<<"Enter number 3::";
    cin>>z;
    if(x >= y && x >= z)
        cout << "Largest number: " << x;

    if(y >= x && y >= z)
        cout << "Largest number: " << y;

    if(z >= x && z >= y)
        cout << "Largest number: " << z;

    return 0;
}
*/

/*2ND QUESTION
#include <iostream>
using namespace std;
int power(int ba, int po) {
   if (po == 0)
   return 1;
   else
   return (ba * power(ba, po-1));
}
int main() {
    int ba,po;
   cout<<"Enter base:";
   cin>>ba;
   cout<<"Enter Power:";
   cin>>po;
   cout<<ba<<" raised to the power "<<po<<" is "<<ba<<"^"<<po<<"::"<<power(ba,po);
   return 0;
}
*/

/*5th question
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[100],sum=0.0, average;
    for(i = 0; i < 5; ++i)
    {
        cout <<"\nEnter marks for subject "<<i + 1 << ":";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / 5;
    cout << "Average of marks in 5 subjects is = " << average;

    return 0;
}
*/

//3RD QUESTION
#include<iostream>
#include<math.h>
#include <time.h>
using namespace std;
void printRandoms(int x,int y,int a)
{
    int i;
    for (i = 0; i < a; i++)
        {
            int num = (rand() % (y - x + 1)) + x;
            cout<<"\n"<<num;
        }
}
int main()
{
    int x,y,a;
    cout<<"Enter the lower bound number::";
    cin>>x;
    cout<<"\nEnter the upper bound number::";
    cin>>y;
    cout<<"\nEnter the number of iteration u need::";
    cin>>a;
    cout<<"\nThe number in range of "<<x<<" and "<<y<<" for "<<a<<" counts are::";
    srand(time(0));
    printRandoms(x, y, a);
    return 0;
}
