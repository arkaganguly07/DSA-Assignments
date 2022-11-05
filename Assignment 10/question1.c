/*
Q1> Write a program to create a binary tree.
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node * right;
};

struct node* newNode(int data) {
    // Allocating memory
    struct node* node = (struct node*)malloc(sizeof(struct node));

    node -> data = data;
    node -> left = NULL;
    node -> right = NULL;

    return node;
}

int main(void) {
    struct node* root = newNode(1);

    root -> left = newNode(2);
    root -> right = newNode(3);

    root -> left -> left = newNode(4);
    root -> left -> right = newNode(5);

    getchar();

    return 0;
}

/*
Output:
         1
      /   \
     2     3
    / \  /   \
   4  5 NULL NULL
*/
