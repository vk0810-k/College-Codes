/*#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#define MAX 50
int top=-1,emp(),full();
char el,pop();
char stack_array[MAX];
main()
{
   int str[MAX];
    int count;
    printf("\nEnter The String:");
    scanf("%s",str);
    for(count=0;count<strlen(str);count++)
    {
       push(str[count]);
    }
    for(count=0;count<strlen(str);count++)
    {
        str[count] = pop();
    }
        printf("%s",str);
        printf("\n");
}
void push(char element)
{
        if(full())
        {
                printf("\nStack Overflow\n");
        }
        else
        {
                top = top + 1;
                stack_array[top] = element;
        }
}

char pop()
{
        if(emp())
        {
                printf("\nStack Underflow\n");
                return 1;
        }
        else
        {
                el = stack_array[top];
                top = top - 1;
                return el;
        }
}

int emp()
{
        if(top == -1)
                return 1;
        else
                return 0;
}

int full()
{
        if(top == MAX-1)
                return 1;
        else
                return 0;
}
*/
/*#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#define MAX 50
int top=-1,stack[MAX];
void push();
void display();
main()
{
    int ch;

	while(1)	//infinite loop, will end when choice will be 4
	{
		printf("\n*** Stack Menu ***");
		printf("\n\n1.Push\n2.Display\n3.Exit");
		printf("\n\nEnter your choice(1-3):");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: push();
					break;
			case 2: display();
					break;
			case 3: exit(0);

			default: printf("\nWrong Choice!!");
		}
	}
}
void push()
{
	int val;

	if(top==MAX-1)
	{
		printf("\nStack is full!!");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
}
void display()
{
	int i;

	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nStack is...\n");
		for(i=top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}
*/
#include<conio.h>
#include<stdio.h>
#include<string.h>
char st[20];
int top=-1;
void psh(char);
char pop();
int main()
{
  char a[20],t;
  int i,f=1;
  printf("Enter the value");
  scanf(“%s”,a);
  for(i=0;i<strlen(a);i++)
 {
     if(a[i]=='('||a[i]=='{'||a[i]=='[')
        psh(a[i]);
        if(a[i]==')'||a[i]=='}'||a[i]==']')
        {
            if(top==-1)
                f=0;
     else
        {
            t=pop();
     if(a[i]==')'&&(t=='['||t=='{'))
     f=0;
     if(a[i]=='}'&&(t=='('||t=='['))
        f=0;
        if(a[i]==']'&&(t=='{'||t=='('))
            f=0;
        }
        }
 }
 if(top>=0)
    f=0;
 if(f==0)
 {
    printf(“Unbalanced\n”);
    continue;
 }
 else
 {
     printf(“Balanced\n”);
     return 0;
 }
}
void psh(char a)
{
st[++top]=a;
}
char pop()
{
return st[top–];
}
