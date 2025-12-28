#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main() {

    struct node *head = malloc(sizeof(struct node));
    head->data = 1;
    head->next = malloc(sizeof(struct node));
    head->next->data = 2;
    head->next->next = malloc(sizeof(struct node));
    head->next->next->data = 3;
    head->next->next->next = malloc(sizeof(struct node));
    head->next->next->next->data = 4;
    head->next->next->next->next = NULL;

    struct node* curr = head;

    while (curr != NULL && curr->next != NULL) {
        int temp = curr->data;
        curr->data = curr->next->data;
        curr->next->data = temp;

        curr = curr->next->next;
    }

    curr = head;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }

    return 0;
}
