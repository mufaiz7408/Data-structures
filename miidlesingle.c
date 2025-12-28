#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main() {

    // Create linked list: 10 → 20 → 30 → 40 → 50
    struct node *head, *slow, *fast;

    head = malloc(sizeof(struct node));
    head->data = 10;
    head->next = malloc(sizeof(struct node));
    head->next->data = 20;
    head->next->next = malloc(sizeof(struct node));
    head->next->next->data = 30;
    head->next->next->next = malloc(sizeof(struct node));
    head->next->next->next->data = 40;
    head->next->next->next->next = malloc(sizeof(struct node));
    head->next->next->next->next->data = 50;
    head->next->next->next->next->next = NULL;

    slow = fast = head;

    // Fast moves 2 steps, slow moves 1 step
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    printf("Middle element = %d", slow->data);
    return 0;
}
