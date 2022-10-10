#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void display(struct Node* node){

    while(node!=NULL)
    {
        printf("%d ",node->data);
        node = node->next;
    }
    printf("\n");
}

int searchElement(struct Node* head, int item)
{
    struct Node* current = head; 
    int index = 0;
    
    while (current != NULL)
    {
        if (current->data == item){
            return index;
        }
        current = current->next;
        index++;
    }
    return -1;
}

int main()
{
    int item;
    struct Node* head = NULL; 
    struct Node* node2 = NULL; 
    struct Node* node3 = NULL; 
    struct Node* node4 = NULL; 
    head =  (struct Node*)malloc(sizeof(struct Node)); 
    node2 = (struct Node*)malloc(sizeof(struct Node)); 
    node3 = (struct Node*)malloc(sizeof(struct Node)); 
    node4 = (struct Node*)malloc(sizeof(struct Node)); 
    head->data = 10;
    head->next = node2; 

    node2->data = 15; 
    node2->next = node3; 

    node3->data = 20;
    node3->next = node4; 

    node4->data = 25;
    node4->next = NULL;
    
    printf("Linked List: ");
    display(head); 
    
    printf("Enter element to search: ");
    scanf("%d", &item);
    
    int index = searchElement(head, item);
    
    if(index == -1)
        printf("Item not found");
    else
        printf("Item found at position: %d", index+1);

    return 0; 
}