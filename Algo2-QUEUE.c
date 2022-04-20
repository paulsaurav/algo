#include <stdio.h>

#define MAX 50

void insert();
void delet();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
main()
{
    int choice;
    while (1)
    {
        printf("\n\t1.Insert element to queue \n");
        printf("\t2.Delete element from queue \n");
        printf("\t3.Display all elements of queue \n");
        printf("\t4.Quit \n");
        printf("\tEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delet();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("\tWrong choice: ");
        } /* End of switch */
    } /* End of while */
} /* End of main() */

void insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("\tQueue Overflow.");
    else
    {
        if (front == - 1)
        /*If queue is initially empty */
        front = 0;
        printf("\tInsert the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} /* End of insert() */

void delet()
{
    if (front == - 1 || front > rear)
    {
        printf("\tQueue Underflow: ");
        return ;
    }
    else
    {
        printf("\tElement deleted from queue is : %d", queue_array[front]);
        front = front + 1;
    }
} /* End of delete() */

void display()
{
    int i;
    if (front == - 1)
        printf("\tQueue is empty: ");
    else
    {
        printf("\tQueue is : ");
        for (i = front; i <= rear; i++)
            printf("%d, ", queue_array[i]);
        printf(" ");
    }
} /* End of display() */
