#ifndef STACK_H
#define STACK_H

typedef struct node {

    int data;
    struct node *next;
}list;

list *head = NULL;

void printList(list *head);
int isEmpty(list *head);
list *createNode(int data);
int *push(list *head, int data);
void pop(list **head, int data);
int peek(list *head);
int count(list *head);
#endif
