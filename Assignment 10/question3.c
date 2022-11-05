/*
Q3> Write a program to check whether a tree is full or complete.
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int item;
  struct Node *left, *right;
};

// Creation of new Node
struct Node *newNode(int k) {
  struct Node *node = (struct Node *)malloc(sizeof(struct Node));
  node->item = k;
  node->right = node->left = NULL;
  return node;
}

bool isFullBinaryTree(struct Node *root) {
  // Checking tree emptiness
  if (root == NULL)
    return true;

  // Checking the presence of children
  if (root->left == NULL && root->right == NULL)
    return true;

  if ((root->left) && (root->right))
    return (isFullBinaryTree(root->left) && isFullBinaryTree(root->right));

  return false;
}

// Count the number of nodes
int countNumNodes(struct Node *root) {
  if (root == NULL)
    return (0);
  return (1 + countNumNodes(root->left) + countNumNodes(root->right));
}

// Check if the tree is a complete binary tree
bool checkComplete(struct Node *root, int index, int numberNodes) {
  // Check if the tree is complete
  if (root == NULL)
    return true;

  if (index >= numberNodes)
    return false;

  return (checkComplete(root->left, 2 * index + 1, numberNodes) && checkComplete(root->right, 2 * index + 2, numberNodes));
}

int main() {
  struct Node *root = NULL;

  root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);

  root->left->left = newNode(4);
  root->left->right = newNode(5);

  root->right->left = newNode(6);

  int node_count = countNumNodes(root);
  int index = 0;

  if (checkComplete(root, index, node_count))
    printf("The tree is a complete binary tree\n");
  else if (isFullBinaryTree(root))
    printf("The tree is a full binary tree\n");

  return 0;
}

/*
Output:
The tree is a complete binary tree
*/