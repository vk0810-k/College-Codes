#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void main ()
{
    int item;
    for(int i=0;i<5;i++)
    {
    printf("\nEnter the item\n");
    scanf("%d",&item);
    }
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
        if(ptr == NULL)
        {
            printf("\nOVERFLOW\n");
        }
        else
        {
            ptr->data = item;
            ptr->next = head;
            head = ptr;
            printf("\nNode inserted\n");
        }
        ptr = head;
        if(ptr == NULL)
        {
            printf("Empty list..");
        }
        else
        {

            printf("printing values . . . . .\n");
            while (ptr!=NULL)
            {
                for(int j=0;j<5;j++)
            {
                printf("\n%d",ptr->data);
                ptr = ptr -> next;
            }
            }
        }

}
