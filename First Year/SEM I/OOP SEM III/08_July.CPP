/*//if else statement
#include <stdio.h>
main()
{
    int x,y,z;
    cout<<("Enter 3 number::");
    scanf("%d %d %d",&x,&y,&z);
    if((x>y)&&(x>z))
    {
        cout<<("The largest number is: %d",&x);
    }
    else if((y>x)&&(y>z))
    {
        cout<<("The largest number is: %d",&y);
    }
    else if((z>y)&&(z>x))
    {
        cout<<("The largest number is: %d",&z);
    }
}
*/
#include<conio.h>
#include<stdio.h>
main()
{
    char x;
    cout << "Enter the grade(in CAPS)::";
    cin >> x;
    switch(x)
    {
        case 'A+':
            cout<<"Outstanding";
            break;
        case 'A':
            cout<<"Excellent";
            break;
        case 'B+':
            cout<<"Very good";
            break;
        case 'B':
            cout<<"Good";
            break;
        case 'C+':
            cout<<"Can Try";
            break;
        case 'C':
            cout<<"average";
            break;
        case 'D':
            cout<<"POOR";
            break;
        default:
            cout<<"Enter a correct input::";
            break;
    }
}
