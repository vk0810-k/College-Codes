#include<conio.h>
#include<string.h>
#include<stdio.h>
#define MAX 10
int top = -1;
int stk[MAX];
void push(char);
char pop();
main()
{
    char exp[MAX],temp;
    int i,flag=1;
    printf("Enter the expression::");
    gets(exp);
    for(i=0;i<strlen(exp);i++)
        {
            if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
               push(exp[i]);
            if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
                if(top == -1)
                flag=0;
            else
                {
                    temp=pop();
                    if(exp[i]==')' && (temp=='{' || temp=='['))
                        flag=0;
                    if(exp[i]=='}' && (temp=='(' || temp=='['))
                        flag=0;
                    if(exp[i]==']' && (temp=='(' || temp=='{'))
                        flag=0;
                }
        }
        if(top>=0)
            flag=0;
        if(flag==1)
            printf("\n Valid expression");
        else
            printf("\n Invalid expression");
}
void push(char c)
{
    if(top == (MAX-1))
        printf("Stack Overflow");
    else
    {
        top = top + 1;
        stk[top] = c;
    }
}
char pop()
{
    if(top == -1)
        printf("\n Stack Underflow");
    else
        return(stk[top--]);
}
