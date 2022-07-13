#include <iostream>
float aveg(int x,int y){   //formal argument
    float avg;
    avg = (x + y)/2.0;
    return avg;
}
int main(){
    using namespace std;
    int a,b;                //actual argument
    float c;
    cout << "ENter the number 1::" << endl;
    cin >>a>>b;
    c = aveg(a,b);
    cout <<"Avereage is::"<<c<<endl;
    return 0;
}

/*

//swapping using reference
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
 swap(&x, &y);
 cout<<"After Swapping"<<endl;
 cout<<"Value of x is: "<<x<<endl;
 cout<<"Value of y is: "<<y<<endl;
 return 0;
}



//swapping using value
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


//swapping using adress
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



//fibonacci using recursion
#include <iostream>
using namespace std;
int fibo(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fibo(x-1)+fibo(x-2));
   }
}
int main() {
   int x , i=0;
   cout<<"FIbonacci Series using recursion" <<endl;
   cout << "Enter the number: ";
   cin >> x;
   cout << "Fibonnaci Series::"<<endl;
   while(i < x) {
      cout<<" "<<fibo(i);
      i++;
   }
   return 0;
}



//raise to the power
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
}*/

