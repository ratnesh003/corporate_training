#ifndef STACK__HEADER__INCLUDED
#define STACK__HEADER__INCLUDED

#define DEFAULT_SIZE 1000

typedef struct {
    int items[DEFAULT_SIZE];
    int top;
    int maxSize;
} Stack;

Stack Stack_create(int size);
int isFull(Stack *s);
int isEmpty(Stack *s);
void push(Stack *s, int value);
int pop(Stack *s);
int peek(Stack *s);

#endif
