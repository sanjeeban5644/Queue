#include<stdio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void display();


int main()
{
    int choice,t=0;
    while(t<4)
    {
        printf("\n--QUEUE IMPLEMENTATION USING LINKED LIST--");
        printf("\n1-> ENQUEUE");
        printf("\n2-> DEQUEUE");
        printf("\n3-> DISPLAY");
        printf("\n4-> EXIT");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        
    }
}