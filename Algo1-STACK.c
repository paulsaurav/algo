#include <stdio.h>
#define MAXSIZE 5

struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;

void push(void);
int  pop(void);
void display(void);

void main ()
{
    int choice;
    int option = 1;
    s.top = -1;

    printf ("\tSTACK OPERATION\n");
    while (option)
    {
        printf ("------------------------------------------\n");
        printf ("      1    -->    PUSH               \n");
        printf ("      2    -->    POP               \n");
        printf ("      3    -->    DISPLAY               \n");
        printf ("      4    -->    EXIT           \n");
        printf ("------------------------------------------\n");

        printf ("\tEnter your choice: ");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return;
        }
        fflush (stdin);
        printf ("\tDo you want to continue? (1= True OR 0= False) : ");
        scanf    ("%d", &option);
    }
}
/*  Function to add an element to the stack */
void push ()
{
    int num;
    if (s.top == (MAXSIZE - 1))
    {
        printf ("\tStack is Full");
        return;
    }
    else
    {
        printf ("\tEnter the element to be pushed: ");
        scanf ("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}
/*  Function to delete an element from the stack */
int pop ()
{
    int num;
    if (s.top == - 1)
    {
        printf ("\nStack is Empty");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf ("\tPoped element is = %d", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return(num);
}
/*  Function to display the status of the stack */
void display ()
{
    int i;
    if (s.top == -1)
    {
        printf ("\tStack is empty: ");
        return;
    }
    else
    {
        printf ("\n\t The status of the stack is: ");
        for (i = s.top; i >= 0; i--)
        {
            printf ("%d, ", s.stk[i]);
        }
    }
    printf ("\n");
}
