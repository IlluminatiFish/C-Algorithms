#include <stdio.h>

// Maximum stack size allowed
#define MAX_SIZE 2

int stack[MAX_SIZE];
int top = 0;

int empty() {
    return top == 0 ? 1 : 0;
}

int full() {
    return top == MAX_SIZE ? 1 : 0;
}

int peek() {
    return stack[top];
}

int pop() {
    int data;
    if(empty()) { 
        printf("StackEmptyError: Could not retrieve element from the stack because it is empty\n");
        return -1; 
    }
    data = stack[top];
    top -= 1;
    return data;
}

int push(int data) {
    if(full()) { 
        printf("StackFullError: Could not insert data value '%d' into the stack because it is full\n", data);
        return -1; 
    }
    top += 1;
    stack[top] = data;
}

int main() {

    // Pushing items into the stack

    push(32);
    push(65);
    push(23);
    

    // Debugging

    printf("Top stack element: %d\n", peek());
    printf("Stack Elements:\n");
    while(!empty()) {
        int data = pop();
        printf("%d\n", data);
    }

    printf("Stack Full: %s\n", full() ? "No" : "Yes");
    printf("Stack Empty: %s\n", empty() ? "No": "Yes");

    return 0;

}
