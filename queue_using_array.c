#include<stdio.h>
#include<stdlib.h>

int enqueue(int [],int);
int dequeue(int []);
int display(int []);
int displayf(int []);

int front=-1,rear=-1;
char ch;

int main()
{
    int n;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);
    int queue[n];
    int t=0,choice;
    while(t<4)
    {
        system("cls");
        if(front>rear)
        {
            front=-1;
            rear=-1;
        }
        printf("\n--QUEUE IMPLEMENTATION USING ARRAYS--");
        printf("\n1-> ENQUEUE");
        printf("\n2-> DEQUEUE");
        printf("\n3-> DISPLAY");
        printf("\n4-> EXIT");
        printf("\nSelect your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : enqueue(queue,n); break;
            case 2 : dequeue(queue); break;
            case 3 : display(queue); break;
            default : printf("\nProgram Ended\n\nThankyou!!"); exit(2);
        }
    }
    return 0;
}

int enqueue(int queue[],int size)
{
    int value;
    if(rear==size-1)
    {
        printf("\n--OVERFLOW--\n");
    }
    else
    {
        printf("\nEnter the value : ");
        scanf("%d",&value);
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=value;
    }
    printf("\nContinue? y/n : ");
    scanf(" %c",&ch);
    if(ch=='n')
    {
        printf("\nThe final queue is : ");
        displayf(queue);
        return 0;
    }
}

int dequeue(int queue[])
{
    if(rear==-1)
    {
        printf("\n--UNDERFLOW--");
    }
    else
    {
        printf("\nElement deleted is : %d",queue[front]);
        front++;
    }
    printf("\nContinue? y/n : ");
    scanf(" %c",&ch);
    if(ch=='n')
    {
        printf("\nThe final queue is : ");
        displayf(queue);
        return 0;
    }
}

int display(int queue[])
{
    int i;
    if(rear==-1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            if(i==rear)
            {
                printf(" %d.",queue[i]);
            }
            else
            {
                printf(" %d,",queue[i]);
            }
        }
    }
    printf("\nContinue? y/n : ");
    scanf(" %c",&ch);
    if(ch=='n')
    {
        printf("\nThe final queue is : ");
        displayf(queue);
    }
}

int displayf(int queue[])
{
    int i;
    if(rear==-1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            if(i==rear)
            {
                printf(" %d.",queue[i]);
            }
            else
            {
                printf(" %d,",queue[i]);
            }
        }
    }
   exit(1);
}