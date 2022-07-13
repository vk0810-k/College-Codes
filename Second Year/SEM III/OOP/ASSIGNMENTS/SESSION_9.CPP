/*1ST QUESTION
#include<iostream>
using namespace std;
class comp
{
    private:
        float rl,ig;

    public:
        comp(): rl(0), ig(0){ }
        void rdata()
        {
            cout<<"Enter the real and imaginary values ::";
            cin>>rl;
            cin>>ig;
        }
        comp operator - (comp c2)
        {
            comp temp;
            temp.rl = rl - c2.rl;
            temp.ig = ig - c2.ig;
            return temp;
        }
        void ddata()
        {
            if(ig < 0)
                cout << "Output Complex number: "<< rl << ig << "i";
            else
                cout << "Output Complex number: " << rl << "+" << ig << "i";
        }
};
int main()
{
    comp c1, c2, result;
    cout<<"Enter first complex number:\n";
    c1.rdata();
    cout<<"Enter second complex number:\n";
    c2.rdata();
    result = c1 - c2;
    result.ddata();
    return 0;
}
*/

/*2nd QUESTION
#include <iostream>
using namespace std;
class addval
{
    private:
        int num;
   public:
       addval()
       {
           cout<<"Enter the number::";
           cin>>num;
       }
       void operator ++()
       {
          num = num+100;
       }
       void ddata()
       {
           cout<<"The value after incrementing it by 100 is: "<<num;
       }
};

int main()
{
    addval av;
    ++av;
    av.ddata();
    return 0;
}
*/
//3RD QUESTION
#include<iostream>
using namespace std;
class time
{
    private:
        int hr,mt,sc;

    public:
        void rdata()
        {
            cout<<"Enter the hour, minute and second values ::";
            cin>>hr;
            cin>>mt;
            cin>>sc;
        }
        time operator + (time t2)
        {
            time temp;
            temp.hr = hr + t2.hr;
            temp.mt = mt + t2.mt;
            temp.sc = sc + t2.sc;
            return temp;
        }
        void ddata()
        {
            cout<<"The time after adding the given 2 timezones are:: "<<hr<<":"<<mt<<":"<<sc;
        }
};
int main()
{
    time t1, t2, result;
    cout<<"Enter time for timezone 1:\n";
    t1.rdata();
    cout<<"Enter time for timezone 2:\n";
    t2.rdata();
    result = t1 + t2;
    result.ddata();
    return 0;
}
