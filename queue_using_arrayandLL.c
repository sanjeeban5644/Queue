#include<stdio.h>
#include<stdlib.h>

struct node
{
    /* data */
    int data;
    struct node *next;
}*new_node,*front,*rear,*temp;


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
    while(choice<3)
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
    int t=0,choice=0;
    final=0;
    while(choice<4)
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
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value : ");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    if(rear==NULL)
    {
        front=new_node;
        rear=new_node;
    }
    else
    {
        rear->next=new_node;
        rear=new_node;
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
        if(front==NULL)
        {
            printf("--empty--");
            printf("\nPress 'y' to continue : ");
        scanf(" %c",&ch);
            return ;
        }
    }
    else
    {
        printf("\nThe Queue is : ");
    }
    if(front==NULL)
    {
        printf("--Empty Queue--");
    }
    else
    {
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
    final=0;
    while(choice<4)
    {
        system("cls");
        printf("\n--QUEUE USING ARRAYS--\n");
        printf("\n1->ENQUEUE");
        printf("\n2->DEQUEUE");
        printf("\n3->DISPLAY");
        printf("\n4->EXIT");
        printf("\n(array size = %d)",size);
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
int rear_arr=-1,front_arr=-1;

void enqueue_arr(int queue[],int size)
{
    int value;
    if(rear_arr==size-1)
    {
        printf("\n--OVERFLOW--");
    }
    else
    {
        printf("\nEnter the value : ");
        scanf("%d",&value);
        if(front_arr==-1)
        {
            front_arr=0;
        }
        rear_arr++;
        queue[rear_arr]=value;
    }
    printf("\nElement inserted successfully!");
    printf("\nPress 'y' to continue : ");
    scanf(" %c",&ch);
}




void dequeue_arr(int queue[],int size)
{
    if(rear_arr==-1)
    {
        printf("--UNDERFLOW--");
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
    printf("\nElement deleted successfully!\n");
    printf("\nPress 'y' to continue : ");
    scanf(" %c",&ch);

}
void display_arr(int queue[],int size)
{
    int i;
    if(final==1 && rear_arr==-1)
    {
        printf("\nThe Final Queue is : ");
        printf("--empty--");
        printf("\nPress 'y' to continue : ");
        scanf(" %c",&ch);
        return ;
    
    }
    if(rear_arr==-1)
    {
        printf("\n--EMPTY QUEUE--");
    }
    else
    {
        if(final==1)
        {
            printf("\nThe Final Queue is : ");
        }
        else
        {
            printf("\nThe Queue is : ");
        }
        for(i=front_arr;i<=rear_arr;i++)
        {
            if(i==rear_arr)
            {
                printf(" %d.",queue[i]);
            }
            else
            {
                printf(" %d,",queue[i]);
            }
        }
    }
    printf("\nPress 'y' to continue : ");
    scanf(" %c",&ch);
}