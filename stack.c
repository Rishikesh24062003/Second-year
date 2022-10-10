// perform push and pop operation in stack

#include <stdio.h>

int main()
{
    int n, top = -1, choice, a;
    printf("Enter the number of element of the array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Press 1 for push\n");
    printf("Press 2 for pop\n");
    scanf("%d", &choice);
    while (choice < 3)
    {

        if (choice == 1)
        {
            if (top < n)
            {
                printf("Enter the element to be pushed:\n");
                scanf("%d", &a);
                top++;
                arr[top] = a;
            }
            else
            {
                printf("Stack Overflow\n");
            }
            for (int i = 0; i <= top; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        else if (choice == 2)
        {
            if (top > -1)
            {
                top--;
            }
            else
            {
                printf("Stack Underflow\n");
            }
            for (int i = 0; i <= top; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        printf("Press 1 for push\n");
        printf("Press 2 for pop\n");
        printf("Press other to exit\n");
        scanf("%d", &choice);
    }
    printf("Successfully exited!!");
    return 0;
}