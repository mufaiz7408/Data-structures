#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

int main() {
    struct node *root = malloc(sizeof(struct node));
    root->data = 10;
    root->left = malloc(sizeof(struct node));
    root->left->data = 5;
    root->right = malloc(sizeof(struct node));
    root->right->data = 15;
    root->left->left = root->left->right = NULL;
    root->right->left = root->right->right = NULL;

    struct node* stack[10];
    int top = -1;
    struct node* curr = root;

    while (curr != NULL || top != -1) {

        while (curr != NULL) {
            stack[++top] = curr;
            curr = curr->left;
        }

        curr = stack[top--];
        printf("%d ", curr->data);
        curr = curr->right;
    }
    return 0;
}
