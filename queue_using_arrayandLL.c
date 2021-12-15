#include<stdio.h>
#include<stdlib.h>

struct node
{
    /* data */
    int data;
    struct node *next;
}*new,*front,*rear,*temp;

front=NULL;
rear=NULL;

int rear_arr=-1,front_arr=-1;

void usingarrays();
void enqueue_arr(int [],int);
void dequeue_arr(int [],int);
void display_arr(int [],int);
void usingll();
void enqueuell();
void dequeuell();
void displayll();

char ch;
int final=0;

int main()
{
    int t=0,choice;
    while(t<3)
    {
        system("cls");
        printf("\n--ENTER YOUR CHOICE--");
        printf("\n1 -> QUEUE USING ARRAYS");
        printf("\n2 -> QUEUE USING LINKED LIST");
        printf("\n3 -> EXIT");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: usingarrays(); break;
            case 2: usingll(); break;
            default: printf("\nProgram Ended!");printf("\n\nThankyou!");break;
        }
    }
    return 0;
}

void usingll()
{
    int t=0,choice;
    while(t<4)
    {
        system("cls");
        printf("\n--QUEUE USING LINKED LIST--\n");
        printf("\n1->ENQUEUE");
        printf("\n2->DEQUEUE");
        printf("\n3->DISPLAY");
        printf("\n4->EXIT");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueuell(); break;
            case 2: dequeuell(); break;
            case 3: displayll(); break;
            default: final=1; displayll(); break;
        }
    }
}

void enqueuell()
{
    new=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value : ");
    scanf("%d",&new->data);
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

void dequeuell()
{
    temp=front;
    if(front==NULL)
    {
        printf("\n--QUEUE UNDERFLOW--");
        printf("\nPress 'y' to continue : ");
        scanf(" %c",&ch);
        return ;
    }
    printf("\nElement deleted is : %d",temp->data);
    front=front->next;
    temp->next=NULL;
    free(temp);
    printf("\nElement deleted successfully!");
    printf("\nPress 'y' to continue : ");
    scanf(" %c",&ch);
}

void displayll()
{
    temp=front;
    if(final==1)
    {
        printf("\nThe Final Queue is : ");
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
    else
    {
        printf("\nThe Queue is : ");
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
    printf("\nPress 'y' to continue : ");
    scanf(" %c",&ch);
}

void usingarrays()
{
    int t=0,choice,size;
    printf("\nEnter the size of the array : ");
    scanf("%d",&size);
    int queue[size];
    while(t<4)
    {
        system("cls");
        printf("\n--QUEUE USING ARRAYS--\n");
        printf("\n1->ENQUEUE");
        printf("\n2->DEQUEUE");
        printf("\n3->DISPLAY");
        printf("\n4->EXIT");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue_arr(queue,size); break;
            case 2: dequeue_arr(queue,size); break;
            case 3: display_arr(queue,size); break;
            default: final=1; display_arr(queue,size); break;
        }
    }
}

void enqueue_arr(int queue[],int size)
{
    
    if(rear_arr==size-1)
    {
        printf("\n--QUEUE OVERFLOW--");
        printf("\nPress 'y' to continue : ");
        scanf(" %c",&ch);
        return ;
    }
    printf("\nEnter the value : ");
    rear++;
    scanf("%d",&queue[rear_arr]);
    printf("\nElement inserted successfully!");
    printf("\nPress 'y' to continue : ");
    scanf(" %c",&ch);
}

void dequeue_arr(int queue[],int size)
{
    if(front_arr==-1)
    {
        printf("\n--QUEUE UNDERFLOW--");
        printf("\nPress 'y' to continue : ");
        scanf(" %c",&ch);
        return ;
    }
    else if(front_arr==rear_arr)
    {
        printf("\nThe element deleted is : %d",queue[front_arr]);
        front_arr=-1;
        rear_arr=-1;
    }
    else
    {
        printf("\nThe element deleted is : %d",queue[front_arr]);
        front_arr++;
    }
    printf("\nPress 'y' to continue : ");
    scanf(" %c",&ch);
}

void display_arr(int queue[],int size)
{
    int i;
    if(final==1)
    {
        printf("\nThe Final Queue is : ");

    }
    else
    {
        printf("\nThe Queue is : ");
    }
    i=front_arr;
    while(i!=rear_arr)
    {
        printf(" %d,",queue[i]);
    }
    printf(" %d.",queue[i]);
}