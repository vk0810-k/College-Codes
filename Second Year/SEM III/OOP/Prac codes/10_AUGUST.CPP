/*//Write a macro to calculate simple interest from principal, rate of interest and time.Simple interest = (principal*rate of interest*time)/100.
#include<iostream>
using namespace std;

int main()
{
    float principal_amt, rate, simple_interest;
    int time;

    printf("Enter the values of principal_amt::");
    scanf("%f", &principal_amt);
    printf("Enter the values of rate::");
    scanf("%f", &rate);
    printf("Enter the values of time::");
    scanf("%d", &time);
    simple_interest = (principal_amt * rate * time) / 100.0;
    printf("Amount = Rs. %f\n", principal_amt);
    printf("Rate = Rs. %f\n", rate);
    printf("Time = %d years\n", time);
    printf("Simple interest = %5\n", simple_interest);

    return 0;
}
*/

/*WAP that can demonstrate the functionality of a calculator and it must include the following operations:
addition, subtraction, division, multiplication and getting two input values from the user.
You have to perform implementation of all these operations using three cases:
Case 1: using normal functions
Case 2: using Inline functions
Case 3: using macros

//Case 1: using normal functions
#include<iostream>
using namespace std;

int main()
{
    char opertor;
    int x, y;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &opertor);
    printf("Enter two operands: ");
    scanf("%d %d", &x, &y);

    switch (opertor) {
    case '+':
        printf("%d + %d = %d", x, y, x + y);
        break;
    case '-':
        printf("%d - %d = %d", x, y, x - y);
        break;
    case '*':
        printf("%d * %d = %d", x, y, x * y);
        break;
    case '/':
        printf("%d / %d = %d", x, y, x / y);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}
*/

/*//Case 2: using Inline functions
#include <iostream>
using namespace std;
class operation
{
    int a,b,add,sub,mul;
    float div;
public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
};
inline void operation :: get()
{
    cout << "Enter first value:";
    cin >> a;
    cout << "Enter second value:";
    cin >> b;
}

inline void operation :: sum()
{
    add = a+b;
    cout << "Addition of two numbers: " << a+b << "\n";
}

inline void operation :: difference()
{
    sub = a-b;
    cout << "Difference of two numbers: " << a-b << "\n";
}

inline void operation :: product()
{
    mul = a*b;
    cout << "Product of two numbers: " << a*b << "\n";
}

inline void operation ::division()
{
    div=a/b;
    cout<<"Division of two numbers: "<<a/b<<"\n" ;
}

int main()
{
    operation s;
    s.get();
    s.sum();
    s.difference();
    s.product();
    s.division();
    return 0;
}
*/

//Case 3: using macros
#include <stdio.h>
#include <stdlib.h>

#define ADD(X, Y) ( X + Y)
#define SUBTRACT(X, Y) (X - Y)
#define MULTIPLY(X, Y) (X * Y)
#define DIVIDE(X, Y) (X/Y)

int main()
{
    int a,b; /* variable declaration and initialization */
    int addition,subtraction,mul,division;
    addition = subtraction = mul = division = 0;
    printf("Enter two numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    addition = ADD(a, b);
    subtraction = SUBTRACT(a, b);
    mul = MULTIPLY(a, b);
    division = DIVIDE(a, b);
    printf("\n");
    printf("_________________________\n");
    printf("Addition = %d\n",addition);
    printf("Subtraction = %d\n",subtraction);
    printf("Multiplication = %d\n",mul);
    printf("Division = %d\n",division);
    return 0;
}
