/*#include<iostream>
using namespace std;
void swap(int *x, int *y);
int main() {
   int a = 100;
   int b = 200;

   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;

   swap(&a, &b);

   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;

   return 0;
}*/
//WAP that accepts marks of ten students n calculates sum and average of calss by passing the
//value to a function
#include<iostream>
using namespace std;
void display(int n[10]) {
    for (int i = 0; i < 10; ++i) {
    cout << "Student " << i + 1 << ": " << n[i] << endl;
    }
}
void avg_sum(int n[10]) {
    int sum = 0 , average;
    for(int i = 0; i < 10; ++i)
    {
        sum += n[i];
    }
    cout<<"Sum:"<<sum<<endl;
    average = sum / 10;
    cout<<"Average:"<<average;
}
int main(){
    int marks[10] = {90,92,85,80,45,65,21,89,99,88};
    display(marks);
    avg_sum(marks);
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    float f = 5.67;
    double b = 5.73,z = 19.8;
    z = z/a + b*60+a;
    cout<<z;
    return 0;
}
*/
