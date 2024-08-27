#include <stdio.h>
#include "stack.h"

Stack Stack_create(int size) {
    Stack s;
    s.maxSize = (size > 0 && size <= DEFAULT_SIZE) ? size : DEFAULT_SIZE;
    s.top = -1; 
    return s;
}

int isFull(Stack *s) {
    return s->top == s->maxSize - 1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack overflow! Unable to push %d\n", value);
        return;
    }
    s->items[++(s->top)] = value;
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow! Unable to pop\n");
        return -1;
    }
    return s->items[(s->top)--];
}

int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty! Unable to peek\n");
        return -1;
    }
    return s->items[s->top];
}