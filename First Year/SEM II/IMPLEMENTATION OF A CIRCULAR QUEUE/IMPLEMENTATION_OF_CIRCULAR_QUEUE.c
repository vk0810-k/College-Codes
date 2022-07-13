#include<conio.h>
#include<stdio.h>
#define n 5
int queue[n];
int r = -1;
int f = -1;
void enqueue(int x)
{
    if(f == 0 && r == n-1)
    {
        printf("OVERFLOW");
    }
    if(f == -1 && r == -1)
    {
        f = r = 0;
    }
    else if(r == n-1 && f != 0)
    {
        r = 0;
    }
    else
    {
        r = r+1;
        queue[r] = x;
    }
}
void dequeue()
{
    if(f == -1)
    {
        printf("UNDERFLOW");
    }
    else if(f == r)
    {
        f = r = -1;
    }
    else if(f == n-1)
    {
        f = 0;
    }
    else
    {
        f = f + 1;
    }
}
int peek()
{
    if(f == –1 && r == –1)
        {
            printf("\n QUEUE IS EMPTY");
            return –1;
        }
    else
        {
            return queue[f];
        }
}
void display()
{
    int i;
    printf("\n");
if(f == –1 && r == –1)
    {
        printf ("\n QUEUE IS EMPTY");
    }
    else if(f<r)
        {
            for(i=f;i<=r;i++)
            printf("\t %d", queue[i]);
        }
    else
    {
        for(i=f;i<n;i++)
            printf("\t %d", queue[i]);
        for(i=0;i<=r;i++)
            printf("\t %d", queue[i]);
    }
}
void main()
{
    enqueue(5);
    enqueue(2);
    enqueue(-1);
    display();
    peek();
    dequeue();
    peek();
    display();
}
