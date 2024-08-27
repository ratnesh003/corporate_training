#include <stdio.h>
#include "stack.h"

int main() {
    Stack s1 = Stack_create(10);
    push(&s1, 10);
    push(&s1, 20);
    push(&s1, 30);

    printf("Top element in s1: %d\n", peek(&s1));
    printf("Popped element from s1: %d\n", pop(&s1));
    printf("Top element after pop in s1: %d\n", peek(&s1));

    Stack s2 = Stack_create(0);
    push(&s2, 40);
    push(&s2, 50);

    printf("Top element in s2: %d\n", peek(&s2));

    return 0;
}
