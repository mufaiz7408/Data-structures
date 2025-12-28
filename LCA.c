#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node* LCA(struct node* root, int n1, int n2) {

    if (root == NULL)
        return NULL;

    if (root->data > n1 && root->data > n2)
        return LCA(root->left, n1, n2);

    if (root->data < n1 && root->data < n2)
        return LCA(root->right, n1, n2);

    return root;
}

int main() {

    struct node* root = malloc(sizeof(struct node));
    root->data = 20;
    root->left = malloc(sizeof(struct node));
    root->left->data = 10;
    root->right = malloc(sizeof(struct node));
    root->right->data = 30;
    root->left->left = root->left->right = NULL;
    root->right->left = root->right->right = NULL;

    struct node* lca = LCA(root, 10, 30);
    printf("LCA = %d", lca->data);

    return 0;
}
