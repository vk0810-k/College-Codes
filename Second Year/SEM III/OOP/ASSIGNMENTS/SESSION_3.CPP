/*1ST QUESTION
#include<iostream>
using namespace std;
float volcy(int,int);
float volco(int,int);
int vol(int);
int main(){
    int rcy,hcy,acu,rco,hco;
    cout<<"\tDATA INPUT";
    cout<<"\nCYLINDER"<<endl;
    cout<<"Enter radius and height of a cylinder:";
    cin>>rcy>>hcy;

    cout<<"\n"<<"CUBE"<<endl;
    cout<<"Enter side of cube:";
    cin>>acu;

    cout<<"\n"<<"CONE"<<endl;
    cout<<"Enter radius and height of cone:";
    cin>>rco>>hco;

    cout<<"\tDATA OUTPUT";
    cout<<"\nVolume of cylinder is"<<volcy(rcy,hcy);
    cout<<"\nVolume of cube is"<<vol(acu);
    cout<<"\nVolume of sphere is"<<volco(rco,hco);
    return 0;
}
float volcy(int rcy,int hcy)
{
    return(3.14*rcy*rcy*hcy);
}
float volco(int rco,int hco)
{
    return((3.14*rco*rco*hco)/3);
}
int vol(int acu)
{
    return(acu*acu*acu);
}
*/

//2nd question
/*Call by value.
#include<iostream>
using namespace std;
void value(int x,int y);
int main()
{
    int x = 5;
    int y = 6;
    cout << "SWAPPING VIA VALUE" <<endl;
    cout << "Before swapping" <<endl;
    cout << "Value of the x is: " << x<< endl;
    cout << "Value of the y is: " << y<< endl;
    value(x,y);
    return 0;
}
void value(int x,int y)
{
    int c;
	c=x;
	x=y;
	y=c;
	cout << "After swapping" <<endl;
    cout << "Value of the x is: " << x<< endl;
    cout << "Value of the y is: " << y<< endl;
}
*/

/*Call by address (pointers)
#include<iostream>
using namespace std;
void add(int *x,int *y);
int main()
{
    int x = 5;
    int y = 6;
    cout << "SWAPPING VIA ADDRESS" <<endl;
    cout << "Before swapping" <<endl;
    cout << "Value of the x is: " << x<< endl;
    cout << "Value of the y is: " << y<< endl;
    add(&x,&y);
    return 0;
}
void add(int *x,int *y)
{
    int c;
	c=*x;
	*x=*y;
	*y=c;
	cout << "After swapping" <<endl;
    cout << "Value of the x is: " << *x<< endl;
    cout << "Value of the y is: " << *y<< endl;
}
*/

//Call by address (reference)
#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
     int c;
     c=x;
     x=y;
     y=c;
}
int main()
{
     int x=500, y=100;
     cout << "SWAPPING VIA REFERENCE" <<endl;
     cout<<"Before Swapping"<<endl;
     cout<<"Value of x is: "<<x<<endl;
     cout<<"Value of y is: "<<y<<endl;
     swap(x,y);
     cout<<"After Swapping"<<endl;
     cout<<"Value of x is: "<<x<<endl;
     cout<<"Value of y is: "<<y<<endl;
     return 0;
}
