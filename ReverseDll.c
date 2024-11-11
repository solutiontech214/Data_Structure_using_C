#include <stdio.h>
#include <stdlib.h>

void insert();
void display();
void rev();

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *start = NULL; // Initialize start to NULL

// Main method/Driver code starts
int main() {
    int ch;
    char choice;
    // Display of Menu for User
    do {
        printf("\n 1 Insert Element ");
        printf("\n 2 Reverse List");
        printf("\n 3 Display List");
        printf("\n Enter your Choice: ");
        scanf("%d", &ch);
        switch (ch) {
            // Calling Function according to user choice
            case 1: insert(); break;
            case 2: rev(); break;
            case 3: display(); break;
            default: printf("Invalid choice. Please try again...!!!");
        }
        printf("\n\n Continue (Y/N): ");
        scanf(" %c", &choice); // Correct format specifier
    } while (choice == 'y' || choice == 'Y');

    return 0; // Correct return type for main
}

// Logic for inserting an element at the end of the doubly linked list
void insert() {
    // Allocating memory for new node 'n'
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL) {
        printf("\n Memory Allocation Failed..!");
        return;
    }
    
    // Taking value from user to insert into node
    printf("\n Enter Value to Insert: ");
    scanf("%d", &n->data);
    n->next = NULL; // Initialize new node's next to NULL

    // If the list is empty, set the new node as the start node
    if (start == NULL) {
        n->prev = NULL;
        start = n;
        printf("\n Insertion of %d Successful...", n->data);
        return;
    }

    // Traverse to the end of the list
    struct node *temp = start;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Insert the new node at the end
    temp->next = n;
    n->prev = temp;
    
    printf("\n Insertion of %d Successful...", n->data);
}

// Logic for displaying elements
void display() {
    if (start == NULL) {
        printf("\n List is Empty..!!");
        return;
    }
    struct node *temp = start;
    // Displaying elements until temp is not NULL
    while (temp != NULL) {
        printf("\n %d", temp->data);
        temp = temp->next;
    }
}

// Logic for reversing the SLL

void rev() {
    if (start == NULL) {
        printf("\n List is Empty..!!");
        return;
    }

    struct node *current = start;
    struct node *temp = NULL;

    // Traverse the list and swap the next and prev pointers for each node
    while (current != NULL) {
        // Swap the next and prev pointers
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        
        // Move to the next node (which is now in the prev field)
        current = current->prev;
    }

    // After the loop, set start to the last node (previously the tail)
    if (temp != NULL) {
        start = temp->prev; // `temp->prev` points to the new first node
    }

    // Print the reversed list
    printf("\n After Reversal:");
    display(); // Call the display function to show the reversed list
}
