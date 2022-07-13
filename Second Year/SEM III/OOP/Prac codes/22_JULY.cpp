#include<iostream>
using namespace std;
int main(){
    int x = 2,y = 1,z = 9;
    x = x && y||z;    // 2 && 1 = 1 = 1||9 == 1
    cout<<x;         //  1
    cout<<x || !y && z; //1||0 = 1 = 1&&9 = 1
    x = y =1;  // x = y = 1
    z = x++ -1;  // z = 1-1 = 0
    cout<<x;       //2
    cout<<z;       //0
    z += -x++ + ++y; //z = z+ -(x++) + (++y)  =  0 + -(2++) + (++1) = 0 - 2 + 2 = 0
    cout<<x;      //3
    cout<<z;      //0
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int &b = a;
    cout<< "Value of a :"<< a << endl;
    cout<<"Value of b :"<<b<<endl;

    cout<<"Address of a :"<<&a<<endl;
    cout<<"Address of b :"<<&b<<endl;

    return 0;
}
