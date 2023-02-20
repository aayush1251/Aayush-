#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
 

struct Node* newNode(int data)
{
    struct Node* new_node =(struct Node*) malloc(sizeof(struct Node*));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
 

struct Node* modularNode(struct Node* head, int k)
{
    
    if (k <= 0 || head == NULL)
        return NULL;  
 
    
    int i = 1;
    struct Node* modularNode = NULL;
    for (struct Node* temp = head; temp != NULL; temp = temp->next) {
        if (i % k == 0)
            modularNode = temp;
         
        i++;
    }
    return modularNode;
}
 

int main(void)
{
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
    
    int k = 3;
    struct Node* answer = modularNode(head, k);
    printf("\nModular node is ");
    if (answer != NULL)
        printf("%d\n", answer->data);
    else
        printf("null\n");
    return 0;
}