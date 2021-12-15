#include<stdio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void display();

struct node
{
    int data;
    struct node *next;
}*rear,*front,*temp,*new;



int final=0;
char ch;

int main()
{
    int choice,t=0;
    rear=NULL;
    front=NULL;
    while(t<4)
    {
        system("cls");
        printf("\n--QUEUE IMPLEMENTATION USING LINKED LIST--");
        printf("\n1-> ENQUEUE");
        printf("\n2-> DEQUEUE");
        printf("\n3-> DISPLAY");
        printf("\n4-> EXIT");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue();break;
            case 2: dequeue(); break;
            case 3: display(); break;
            default: final=1; display(); printf("\nProgram Ended!");printf("\n\nThankyou!");
        }
    }
    return 0;
}

void enqueue()
{
    new=(struct node*)malloc(sizeof(struct node));
    printf("\n--Entering Data--");
    printf("\nEnter the data : ");
    scanf("%d",&new->data);
    new->next=NULL;
    if(rear==NULL)
    {
        front=new;
        rear=new;
    }
    else
    {
        rear->next=new;
        rear=new;
    }
    printf("\nElement inserted successfully!");
    printf("\nPress 'y' to continue : ");
    scanf(" %c",&ch);
}

void dequeue()
{
    if(front==NULL)
    {
        printf("\n--UNDERFLOW--");
        printf("\nPress 'y' to continue : ");
        scanf(" %c",&ch);
        return ;
    }
    printf("\n--Deleting Data--");
    temp=front;
    printf("\nElement deleted is : %d",temp->data);
    front=front->next;
    temp->next=NULL;
    free(temp);
    printf("\nElement deleted successfully!");
    printf("\nPress 'y' to continue : ");
    scanf(" %c",&ch);
}

void display()
{
    if(front==NULL)
    {
        printf("\n--Queue is empty--");
        printf("\nPress 'y' to continue : ");
        scanf(" %c",&ch);
        return ;
    }
    if(final==0)
    {
        printf("\nThe Queue is : ");
        temp=front;
        while(temp!=NULL)
        {
            if(temp==rear)
            {
                printf(" %d.",temp->data);
            }
            else
            {                               
                printf(" %d,",temp->data);
            }
            temp=temp->next;
        }
    }
    else
    {
        printf("\nThe Final Queue is : ");
        temp=front;
        while(temp!=NULL)
        {
            if(temp==rear)
            {
                printf(" %d.",temp->data);
            }
            else
            {
                printf(" %d,",temp->data);
            }
            temp=temp->next;
        }
        return ;
    }
    printf("\nPress 'y' to continue : ");
    scanf(" %c",&ch);
}