#include<conio.h>
#define n 5
int queue[n];
int rear = -1;
int front = -1;
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
void enqueue(int x)
{
    if(rear == n-1)
    {
        printf("OVERFLOW");
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}
void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("UNDERFLOW");
    }
    else if(front == rear)
    {
        front = rear - 1;
    }
    else
    {
        printf("%d\n",queue[front]);
        front++;
    }
}
void display()
{
    if(front == -1 && rear == -1)
    {
        printf("QUEUE IS EMPTY");
    }
    else
    {
        for(int i = front;i<rear+1;i++)
        {
            printf("%d",queue[i]);
        }
    }
}
int peek()
{
    if(front == -1 || front>rear)
        {
            printf("QUEUE IS EMPTY");
            return -1;
        }
    else
        {
            return queue[front];
        }
}
