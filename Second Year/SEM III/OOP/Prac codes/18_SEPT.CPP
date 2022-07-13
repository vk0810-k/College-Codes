#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int x,y=0,a,b=0,c;
    cout<<"Enter a 5 digit palindrome number::";
    cin>>x;
    a = x;
    while (x != 0)
        {
            c = x % 10;
            b = b * 10 + c;
            a /= 10;
            y++;
        }
    if(y == 5)
    {
        try
        {
            if(b != a)
                {
                    throw b;
                }
            else
                {
                    cout<<(b);
                }
        }
        catch(int ex)
        {
            cout<<"Exception: Denominator can not be zero : "<<ex;
        }
    }
    else
    {
        cout<<"Enter a 5 digit number";
    }
    return 0;
}

