#include <stdio.h>
#include <stdlib.h>



struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};


int main(){

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));


    head->data = 10;
    head->second;
    head->prev = NULL;

    second->data = 20;
    second->third;
    second->prev = head;

    third->data = 30;
    third->next = NULL;
    third->prev = second;

    // Traversing forward
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d <->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
    return 0;


}
