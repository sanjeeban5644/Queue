#include<stdio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void display();

int front=-1,rear=-1;

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
            case 1 : enqueue(queue); break;
            case 2 : dequeue(queue); break;
            case 3 : display(queue); break;
            default : printf("\nProgram Ended\n\nThankyou!!"); exit(2);
        }
    }
    return 0;
}

void enqueue(int queue[])
{
    
}