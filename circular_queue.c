#include<stdio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void display();

int front=-1,rear=-1,final=0;
char ch;

int main()
{
    int choice,t=0,size;
    printf("\nEnter the size of the array : ");
    scanf("%d",&size);
    int queue[size];
    while(t<4)
    {
        system("cls");
        printf("\n--CIRCULAR QUEUE--\n");
        printf("\n1-> ENQUEUE");
        printf("\n2-> DEQUEUE");
        printf("\n3-> DISPLAY");
        printf("\n4-> EXIT");
        printf("\nSelect your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : enqueue(queue,size); break;
            case 2 : dequeue(queue,size); break;
            case 3 : display(queue,size); break;
            default : final=1; display(queue,size) ; printf("\nProgram Ended\n\nThankyou!!"); exit(2);
        }
    }
    return 0;
}

void enqueue(int queue[],int size)
{
    int ele;
    printf("\n--Entering the data--");
    printf("\nEnter the data : ");
    scanf("%d",&ele);
    if(rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=ele;
    }
    else if(((rear+1)%size)==front)
    {
        printf("\n--Overflow--");
        printf("\nPress 'y' to continue : ");
        scanf(" %c",&ch);
        return ;
    }
    else
    {
        rear=(rear+1)%size;
        queue[rear]=ele;
    }
    printf("\nElement inserted successfully!");
    printf("\nPress 'y' to continue : ");
    scanf(" %c",&ch);
}

void dequeue(int queue[],int size)
{
    if(front==-1 && rear==-1)
    {
        printf("\n--UNDERFLOW--");
        printf("\nPress 'y' to continue : ");
        scanf(" %c",&ch);
        return ;
    }
    else if(front == rear)
    {
        printf("\nThe element deleted is : %d",queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("\nThe element deleted is : %d",queue[front]);
        front=(front+1)%size;
    }
    printf("\nPress 'y' to continue : ");
    scanf(" %c",&ch);
}

void display(int queue[],int size)
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("\n--QUEUE IS EMPTY--");
        printf("\nPress 'y' to continue : ");
        scanf(" %c",&ch);
        return ;
    }
    else
    {
        if(final==0)
        {
            printf("\nQueue is : ");
        }
        else
        {
            printf("\nThe Final Queue is : ");
        }
        while(i!=rear)
        {
            printf(" %d,",queue[i]);
            i=(i+1)%size;
        }
        printf(" %d.",queue[i]);
        printf("\nPress 'y' to continue : ");
        scanf(" %c",&ch);
    }
}