#include <stdio.h>
#include <stdio.h>
#include "stack.h"

int main() {

    list *head = NULL;
    int size, data, choice;

    printf("Enter size of stacks: ");
    scanf("%d", &size);

    for(int i = 0; i < size; ++i) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &data);
        head = push(head, data);
    }

    do
    {
        printf("1 - Print the list\n");
        printf("2 - Count the stacks\n");
        printf("3 - Peek the stack\n");
        printf("4 - Delete certain number in the stack\n");
        printf("5 - Check if the stack is Empty or not\n");
        


        
        printf("10 - Exit the program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: {
                printList(head);
                break;
            }
            case 2: {
                printf("\nThe count of the stacks is: ", count(head));
                break;
            }
            case 3: {
                printf("%d top stack\n", peek(head));
                break;
            }
            case 4: {
               int data;
               printf("Enter data you want to delete between the stacks: ");
               scanf("%d", &data);
               pop(&head, data);
               printf("Successfully deleted!\n");
               break;
            }
            case 5: {
                printf("%d (1 its not empty or 0 is empty): ", isEmpty(head));
                break;
            }
            case 10: {
                printf("Exiting the program..\n");
                break;
            }
            default:
               printf("Invalid Choice!\n");
        }
    } while (choice != 10);
    
}
