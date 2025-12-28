#include <stdio.h>
#include <stdlib.h>

/*
 STEP 1: Define structure of a BST node
 Each node has:
  - data
  - left child
  - right child
*/
struct node {
    int data;
    struct node *left;
    struct node *right;
};

/*
 STEP 2: Create a new node
*/
struct node* createNode(int value) {
    struct node* newNode;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

/*
 STEP 3: Insert element into BST
 Rule:
  - smaller value → left
  - larger value → right
*/
struct node* insert(struct node* root, int value) {

    // If tree is empty, create root
    if (root == NULL) {
        return createNode(value);
    }

    // If value is smaller, go left
    if (value < root->data) {
        root->left = insert(root->left, value);
    }
    // If value is greater, go right
    else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

/*
 STEP 4: Inorder Traversal
 Left → Root → Right
 Gives SORTED order
*/
void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

/*
 STEP 5: Preorder Traversal
 Root → Left → Right
*/
void preorder(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

/*
 STEP 6: Postorder Traversal
 Left → Right → Root
*/
void postorder(struct node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

/*
 STEP 7: Search an element in BST
*/
int search(struct node* root, int key) {

    if (root == NULL)
        return 0;

    if (root->data == key)
        return 1;

    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

/*
 STEP 8: Find minimum value
 Go left until NULL
*/
int findMin(struct node* root) {
    while (root->left != NULL)
        root = root->left;

    return root->data;
}

/*
 STEP 9: Find maximum value
 Go right until NULL
*/
int findMax(struct node* root) {
    while (root->right != NULL)
        root = root->right;

    return root->data;
}

/*
 MAIN FUNCTION
*/
int main() {

    struct node* root = NULL;

    /* Creating BST */
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    printf("Inorder Traversal (Sorted): ");
    inorder(root);

    printf("\nPreorder Traversal: ");
    preorder(root);

    printf("\nPostorder Traversal: ");
    postorder(root);

    /* Searching */
    int key = 40;
    if (search(root, key))
        printf("\n%d found in BST", key);
    else
        printf("\n%d not found in BST", key);

    /* Min and Max */
    printf("\nMinimum value: %d", findMin(root));
    printf("\nMaximum value: %d", findMax(root));

    return 0;
}
