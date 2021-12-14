#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);
    int t=0,choice;
    while(t<4)
    {
        printf("\n--QUEUE IMPLEMENTATION USING ARRAYS--");
        printf("\n1-> ENQUEUE");
        printf("\n2-> DEQUEUE");
        printf("\n3-> DISPLAY");
        printf("\n4-> EXIT");
        printf("\nSelect your choice : ");
        scanf("%d",&choice);
    }
}