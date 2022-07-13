/*1ST QUESTION
#include <iostream>
using namespace std;
template <class T>
T avg(T a, T b) {
  return (a+b)/2;
}

int main()
{
    int x,y;
    float u,v;
    cout<<"Enter 2 integer type numbers::";
    cin>>x>>y;
    cout<<"\nEnter 2 floating type numbers::";
    cin>>u>>v;
    cout<<"\nThe average of "<<x<<" and "<<y<<" is:: "<<avg(x,y);
    cout<<"\nThe average of "<<u<<" and "<<v<<" is:: "<<avg(u,v);
    return 0;
}
*/

//2ND QUESTION
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
    cout<<"Input Taken!!!";
    try
    {
        if(y > 12345 && y < 54321)
        {
            throw y;
        }
        else
        {
            cout<<"\nThe entered string is:: "<<y<<"\n";
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
         for(i=0;i < len ;i++)
         {
             if(x[i] != x[len-i-1])
                {
                    flag = 1;
                    break;
                }
             if(flag == 0)
                {
                    throw x;
                }
            else
                cout<<"The entered string is :: "<<x<<"\n";
         }
    }
    catch(char* ex)
    {
        cout<<"The entered string should not be a palindrome ::"<<ex<<"\n";
    }


    return 0;
}
