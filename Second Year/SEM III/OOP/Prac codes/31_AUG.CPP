//local class access global types
/*#include<iostream>
using namespace std;

int x;

void fun()
{

      class F1 {
      public:
         Test1() { cout << "F1::F()" << endl; }
      };

      class F2
      {

           F1 f1;
      public:
          void method() {
              cout << "x = " << x << endl;
          }
      };

      F2 f;
      f.method();
}

int main()
{
    fun();
    return 0;
} */

//local class can only be used in its function and not outside
/*#include<iostream>
using namespace std;

void fun()
{
    class Func
    {
    public:
       void method() {
          cout << "VK";
       }
    };

    Func f;
    f.method();
}

int main()
{
    fun();
    return 0;
}*/

//method of local class must be defined inside local class only and not outside it can only be used in its function and not outside it
/*#include<iostream>
using namespace std;
void mult() {
   class MULTI {
      private:
      int x;
      public:
      void multiplication( int y) {
        cout<<"The number before multiplication is::"<<y<<endl;
        x = y*12;
        cout<<"The number after multiplication is::"<<x;
      }
   };
   MULTI mul;
   mul.multiplication(7);
}
int main() {
   mult();
   return 0;
}*/

//local classes can access other local classes of same function
