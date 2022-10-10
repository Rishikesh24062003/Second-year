// perform push and pop operation in stack
#include <stdio.h>

#include <stdlib.h>

#define Size 4

int TOP = -1, i, array[Size];
void Push();
void Pop();
void show();

int main()
{
    int choice;

    while (1)
    {
        printf("\nOperations performed by queue");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            show();
            break;
        case 4:

            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }

    return 0;
}
void Push()
{
    int x;

    if (TOP == Size - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter element to be inserted to the queue:");
        scanf("%d", &x);
        TOP = TOP + 1;
        array[TOP] = x;
    }
}

void Pop()
{
    if (TOP == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        TOP = TOP - 1;
        printf("\nPopped element:  %d", array[TOP]);
    }
}

void show()
{

    if (TOP == -1)
        printf("\nUnderflow!!");

    else
    {
        printf("\nElements present in the queue: \n");
        for (i = TOP; i >= 0; --i)
            printf("%d\n", array[i]);
    }
}