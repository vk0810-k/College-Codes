#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char x[5];
    int y,len;
    int flag = 0,i = 0;
    cout << "Enter the 5 digit character value ::";
    cin >> x;
    len = strlen(x);
    cout << "Enter the 5 digit numeric value value ::";
    cin >> y;
    cout<<"OK"<<"\n";
    try
    {
        if(y > 12345 && y < 54321)
        {
            throw y;
        }
        else
        {
            cout<<"The entered string is:: "<<y<<"\n";
        }
    }
    catch(int ex)
    {
        cout<<"Exception: The number cannot be between the range of 12345 and 54321 :: "<<ex<<"\n";
    }


    try
    {
        for (int i = 0; x[i] != '\0'; ++i)
        {
            if(x[i] == 'a' || x[i] == 'k')
            {
                throw x[i];
            }
            else
            {
                cout<<"The entered string is:: "<<x<<"\n";
            }
        }
    }
    catch(char ex)
    {
        cout<<"Exception: The string entered cannot contain characters 'a' and 'k' :: "<<ex<<"\n";
    }


    try
    {
        char* v;
        v = strrev(x);

        if(x == v){
            throw x;
        }
        else
            cout<<"The entered string is :: "<<x<<"\n";
    }
    catch(char* ex)
    {
        cout<<"The entered string should not be a palindrome ::"<<ex<<"\n";
    }


    return 0;
}
