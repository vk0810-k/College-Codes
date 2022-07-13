//real life examples visibility modes

//public visibility

#include<iostream>
using namespace std;

class stud
{
    public:
        char name_public[20] = "Varun Khadayate";

    private:
        char gend_private[10] = "Male";

    protected:
        char caste_protected[10] = "OPEN";


};

class data: public stud
{
    public:
        char* getdataprotected()
        {
            return caste_protected;
        }
        char* getdataprivate()
        {
            return name_public;
        }

}d;

int main()
{
    cout << "Private = " << d.getdataprivate() << endl;
    cout << "Protected = " << d.getdataprotected() << endl;
    cout << "Public = " << d.name_public << endl;

    return 0;
}
