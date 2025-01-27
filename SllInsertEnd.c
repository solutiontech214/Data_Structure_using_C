// Created by Onkar Gutti on 27/1/2025

//This code is used to insert data at the end of a singly linked list in C language.
//The singly linked list is created using structures.
//The data is inserted at the end of the singly linked list using a function.
//The data is inserted at the end of the singly linked list using a while loop.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

int insertEnd(struct node **head, int data) {
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL) {
        return 0; // Memory allocation failed
    }

    n->data = data;
    n->next = NULL;

    if (*head == NULL) {
        *head = n;
    } else {
        struct node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n;
    }

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
    int chno;
    char ch;
    // Menu driven program
    do {
        printf("\nEnter the data to be inserted at the end of the singly linked list: ");
        scanf("%d", &chno);
        if (insertEnd(&head, chno)) {
            printf("\nData inserted successfully");
        } else {
            printf("\nData insertion failed");
        }

        traverse(head);
        printf("\nDo you want to insert more data at the end of the singly linked list? (y/n): ");
        scanf(" %c", &ch);

    } while (ch == 'y' || ch == 'Y');
    return 0;
}