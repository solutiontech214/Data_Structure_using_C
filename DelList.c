#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node 
{
    int val;
    struct node *next;
};
struct node *start=NULL;

void display();
void delete_specf();
void main()
{
    struct node *n1=(struct node *)malloc(sizeof(struct node ));
    struct node *n2=(struct node *)malloc(sizeof(struct node ));
    struct node *n3=(struct node *)malloc(sizeof(struct node ));
    struct node *n4=(struct node *)malloc(sizeof(struct node ));
    struct node *n5=(struct node *)malloc(sizeof(struct node ));
    start=n1;
    n1->val=20;
    n1->next=n2;
    n2->val=30;
    n2->next=n3;
    n3->val=40;
    n3->next=n4;
    n4->val=50;
    n4->next=n5;
    n5->val=60;
    n5->next=NULL;
display();
delete_specf();
display();

}
void display()
{
if(start==NULL)
{
    printf("\nlist is empty.....");
    return;

}
struct node *temp=start;
while(temp!=NULL)
{
    printf("%d \t",temp->val);
    temp=temp->next;
}
}


void delete_specf() {
    int key;
    if (start == NULL) {
        printf("SLL is empty.......\n");
        return;
    }

    printf("Enter the Key You Want to Delete: ");
    scanf("%d", &key);

    struct node *prev = start, *temp = start->next;

    // Check if the key is in the first node
    if (start->val == key) {
        start = start->next;
        free(prev);
        return;
    }

    while (temp != NULL) {
        if (temp->val == key) {
            prev->next = temp->next;
            printf("%d is deleted\n", temp->val);
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    // Check if the key wasn't found and temp is the last node
    if (temp == NULL && prev->val != key) {
        printf("Key not found in the list.\n");
    }
}