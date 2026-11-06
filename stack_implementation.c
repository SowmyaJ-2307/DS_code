c
#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push()
{
    int value;

    if(top == SIZE - 1)
    {
        printf("\nStack Overflow!");
    }
    else
    {
        printf("\nEnter element: ");
        scanf("%d", &value);

        top++;
        stack[top] = value;

        printf("\nElement pushed successfully");
    }
}

void pop()
{
    if(top == -1)
    {
        printf("\nStack Underflow!");
    }
    else
    {
        printf("\nDeleted element: %d", stack[top]);
        top--;
    }
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("\nStack is Empty!");
    }
    else
    {
        printf("\nStack elements:\n");

        for(i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. DISPLAY");
        printf("\n4. EXIT");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
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
                return 0;

            default:
                printf("\nInvalid Choice!");
        }
    }

    return 0;
}
