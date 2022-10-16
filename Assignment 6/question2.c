/*
Q2> Write a program to implement stack using linked list.
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void push(int val){
    struct node *newNode = malloc(sizeof(struct node));
    
    newNode -> data = val;
    newNode -> next = head;
    head = newNode;
}

void pop(){
    struct node *temp;

    if (head == NULL)
    {
        printf("Stack is empty\n");
    }

    else
    {
        printf("Poped element = %d\n", head -> data);

        temp = head;
        head = head -> next;
        free(temp);
    }
}

void printList(){
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
}

int main(){
    push(10);
    push(20);
    push(30);

    printf("The stack:\n");
    printList();

    return 0;
}

/*
Output:
The stack:
30 20 10
*/