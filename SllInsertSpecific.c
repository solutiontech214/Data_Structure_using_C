// Created by Onkar Gutti on 27/1/2025
// This code is used to insert data at a specific position in a singly linked list in C language.
// The singly linked list is created using structures.
// The data is inserted at a specific position in the singly linked list using a function.
// The data is inserted at a specific position in the singly linked list using a while loop.
// The data is inserted at a specific position in the singly linked list using a temporary pointer.
// The data is inserted at a specific position in the singly linked list using a temporary pointer and a function.
// The data is inserted at a specific position in the singly linked list using a temporary pointer and a function.
// The data is inserted at a specific position in the singly linked list using a temporary pointer and a function.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

int insertSpecific(struct node **head, int data, int pos) {
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL) {
        return 0; // Memory allocation failed
    }
    n->data = data;

    if (pos == 1) {
        n->next = *head;
        *head = n;
        return 1; // Insertion successful
    }

    struct node *tmp = *head;
    int i = 1;
    while (i < pos - 1 && tmp != NULL) {
        tmp = tmp->next;
        i++;
    }

    if (tmp == NULL) {
        free(n); // Position is out of bounds
        return 0;
    }

    n->next = tmp->next;
    tmp->next = n;

    return 1; // Insertion successful
}

void traverse(struct node *head) {
    printf("\nThe singly linked list is: ");
    if (head == NULL) {
        printf("\nNo Elements in the singly linked list");
        return;
    }
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int chno, pos;
    char ch;
    // Menu driven program
    do {
        printf("\nEnter the data to be inserted in the singly linked list: ");
        scanf("%d", &chno);
        printf("\nEnter the position at which the data is to be inserted: ");
        scanf("%d", &pos);
        if (insertSpecific(&head, chno, pos)) {
            printf("\nData inserted successfully");
        } else {
            printf("\nData insertion failed");
        }
        traverse(head);
        printf("\nDo you want to insert more data in the singly linked list? (Y/N): ");
        scanf(" %c", &ch); // Note the space before %c to consume any leftover newline character
    } while (ch == 'Y' || ch == 'y');
    return 0;
}