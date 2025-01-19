#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct Stack {
    int arr[MAX];
    int top;
} Stack;
void initialize(Stack *stack) {
    stack->top = -1;
}
int isFull(Stack *stack) {
    return stack->top == MAX - 1;
}
int isEmpty(Stack *stack) {
    return stack->top == -1;
}
void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow! Unable to push %d\n", value);
    } else {
        stack->arr[++stack->top] = value;
        printf("Pushed %d into the stack\n", value);
    }
}
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow! No elements to pop\n");
        return -1;
    } else {
        return stack->arr[stack->top--];
    }
}
void display(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = stack->top; i >= 0; i--) {
            printf("%d\n", stack->arr[i]);
        }
    }
}
int main() {
    Stack stack;
    initialize(&stack);

    int choice, value;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter the value to push: ");
            scanf("%d", &value);
            push(&stack, value);
            break;
        case 2:
            value = pop(&stack);
            if (value != -1) {
                printf("Popped value: %d\n", value);
            }
            break;
        case 3:
            display(&stack);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

	
