#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void printList(list *head) {

    if(head == NULL) {
        printf("The stack is Empty!");
        exit(1);
    }

    while(head->next != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }

    printf("%d -> NULL", head->data);
}

int isEmpty(list *head) {
    return !head;
}
list *createNode(int data) {

    list *newNode = (list*)malloc(sizeof(list));

    if(!newNode) {
        printf("Memory failed!");
        exit(2);
    }
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

list *push(list *head, int data) {

    list *newNode = createNode(data);

    newNode->next = head;
    head = newNode;

    return head;
}

void pop(list **head, int data) {

    if(*head == NULL) {
        printf("Stack is Empty!");
        exit(3);
    }

    list *curr = *head;
    list *prev = NULL;

    if(curr != NULL && curr->data == data) {
        list *temp = curr->next;
        free(curr);
        return data;
    }

    while(curr != NULL && curr->data != data) {
        prev = curr;
        curr = curr->next;
    }

    if(curr == NULL) {
        printf("Invalid Number!");
        exit(5);
    }

    prev->next = curr->next;
    free(curr);
    return data;
}

int peek(list *head) {

    if(isEmpty(head)) {
        printf("Stack is empty!");
        exit(7);
    }

    return head->data;
}

int count(list *head) {

    int count = 0;
    if(isEmpty(head)) {
        printf("Stack is empty!");
        exit(9);
    }

    while(head != NULL) {
        count++;
        head = head->next;
    }

    return count;
}
