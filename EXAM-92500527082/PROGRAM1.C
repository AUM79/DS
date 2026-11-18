implement stack following operations : push, pop, print, exit

#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push()
{
    int value;

    if (top == SIZE - 1)
    {
        printf("Stack is full!\n");
    }
    else
    {
        printf("Enter a value: ");
        scanf("%d", &value);

        top++;
        stack[top] = value;

        printf("Element inserted successfully.\n");
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty!\n");
    }
    else
    {
        printf("Deleted element is %d\n", stack[top]);
        top--;
    }
}

void print()
{
    int i;

    if (top == -1)
    {
        printf("Stack is empty!\n");
    }
    else
    {
        printf("Stack elements are:\n");

        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Print");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                print();
                break;

            case 4:
                printf("Program ended.");
                break;

            default:
                printf("Invalid choice!");
        }

    } while (choice != 4);

    return 0;
}