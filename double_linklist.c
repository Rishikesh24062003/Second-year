#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *previous;
    struct node *next;
};
struct node *head,*ptr = NULL;

void insert(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    if (head == NULL)
    {
        head = ptr = newNode;
        head->previous = NULL;
        head->next = NULL;
    }
    else
    {
        ptr->next = newNode;
        newNode->previous = ptr;
        ptr = newNode;
        ptr->next = NULL;
    }
}
void display()
{
    struct node *current = head;
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("Nodes of doubly linked list: \n");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
int main()
{
    int ele;
    printf("Enter five elements:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ele);
        insert(ele);
    }
    display();
    return 0;
}