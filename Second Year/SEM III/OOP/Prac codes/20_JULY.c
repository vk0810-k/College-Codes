//strcat
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[] = "Varun";
    char s2[] = " Khadayate";
    strcat(s1, s2);
    cout << s1;
    return 0;
}


/*

//strcmp
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char s1[] = "Varun";
    char s2[] = "Khadayate";
    int x = strcmp(s1, s2);
    if(x == 0)
    {
        cout<< "The both strings are similar"<<endl;
    }
    else
    {
        cout<<"Both the strings are not same"<<endl;
    }
    return 0;
}



//strlen
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char s1[] = "Varun Khadayate";
    int x = strlen(s1);
    cout<<"The lenght of sting is ::"<<x<<endl;
    return 0;
}


//strncat
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char s1[] = "Varun";
    char s2[] = " Khadayate";
    strncat(s1, s2,4);
    cout << s1;
    return 0;
}



//strnlen
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char s1[] = "Varun Khadayate";
    int x = strnlen(s1, 6);
    cout<<"The lenght of sting is ::"<<x<<endl;
    return 0;
}



//strncmp
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char s1[] = "Varun";
    char s2[] = "Khadayate";
    int x = strncmp(s1, s2, 5);
    if(x == 0)
    {
        cout<< "The both strings are similar"<<endl;
    }
    else
    {
        cout<<"Both the strings are not same"<<endl;
    }
    return 0;
}



#include <iostream>
using namespace std;
int mul(int x, int y) {
  return x * y;
}

double mul(double x, double y) {
  return x * y;
}

int main() {
  int a = mul (16, 8);
  double b = mul (98.3, 193.15);
  cout << "Int: " << a << "\n";
  cout << "Double: " << b;
  return 0;
}



//function overload
#include<iostream>
using namespace std;
float vol(int,int);
float vol(int,int);
int vol(int);
int main(){
    int rcy,hcy,acu,rco,hco;
    cout<<"CYLINDER"<<endl;
    cout<<"Enter radius and height of a cylinder:";
    cin>>rcy>>hcy;
    cout<<"Volume of cylinder is"<<vol(rcy,hcy);
    cout<<"\n"<<"CUBE"<<endl;
    cout<<"Enter side of cube:";
    cin>>acu;
    cout<<"Volume of cube is"<<vol(acu);
    cout<<"\n"<<"CONE"<<endl;
    cout<<"Enter radius and height of cone:";
    cin>>rco>>hco;
    cout<<"Volume of sphere is"<<vol(rco,hco);
    return 0;
}
float vol(int rcy,int hcy)
{return(3.14*rcy*rcy*hcy);}
float vol(float rco,hco)
{return((3.14*rco*rco*hco)/3);}
int vol(int acu)
{return(acu*acu*acu);}
