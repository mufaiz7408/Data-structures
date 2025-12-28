#include <stdio.h>
#define MAX 5

int main() {

    int stack[MAX];   // stack array
    int top = -1;     // stack is empty initially

    /* -------- PUSH OPERATION -------- */
    top++;
    stack[top] = 10;

    top++;
    stack[top] = 20;

    top++;
    stack[top] = 30;

    printf("After PUSH operations:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }

    /* -------- PEEK OPERATION -------- */
    printf("\nPeek (Top element): %d\n", stack[top]);

    /* -------- POP OPERATION -------- */
    printf("\nPopped element: %d\n", stack[top]);
    top--;

    printf("After POP operation:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }

    /* -------- UNDERFLOW CHECK -------- */
    top = -1;   // empty stack

    if (top == -1)
        printf("\nStack Underflow (Stack is empty)\n");

    /* -------- OVERFLOW CHECK -------- */
    top = MAX - 1;   // stack full

    if (top == MAX - 1)
        printf("Stack Overflow (Stack is full)\n");

    return 0;
}
