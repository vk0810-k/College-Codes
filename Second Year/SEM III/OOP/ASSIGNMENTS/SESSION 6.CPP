#include<iostream>

using namespace std;

class uname;

class pass
{
    char y[20];
    public:
        void display(uname obj);
        y = "Password::vkoop";
};

class uname
{
    char x[20];
    public:
        uname()
        {
            x = "Username::Varun Khadayate"
        }
        friend void pass::display(uname);
};

void pass::display(uname obj)
{
    cout << obj.x << endl;
}

int main()
{
    A a;
    B b;
    b.display(a);
    return 0;
}
