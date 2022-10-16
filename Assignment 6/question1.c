/*
Q1> Write a program to implement stack using array.
*/

#include <stdio.h>
#include <stdlib.h>

int n, *stack;
int top = -1;

void push(int x){
    if (top == n)
    {
        return;
    }
    stack[++top] = x;
}

int pop(){
    if (top == -1)
    {
        return -1;
    }
    return stack[--top];
}

int peek(){
    if (top == -1)
    {
        return -1;
    }
    return stack[top];
}

void display(){
    for (int i = top; i > -1; --i)
    {
        printf("%d", stack[i]);
    }
    printf("\n");
}

int main(){
    n = 10;

    printf("Initialising the stack with size 10\n");
    stack = (int*)malloc(n*sizeof(int));

    printf("Pushing elements into the stack\n");
    push(1);
    push(2);
    push(3);

    printf("Displaying elements in the stack\n");
    display();

    return 0;
}

/*
Output:
Initialising the stack with size 10
Pushing elements into the stack
Displaying elements in the stack
321
*/
