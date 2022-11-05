/*
Q7> Write a program to implement a two way headed binary tree.
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct Node{
   int data ;
   struct Node *left ;
   struct Node *right ;
   bool leftThread ;
   bool rightThread ;
};

struct Node* newNode(int data)

{
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

void insert(struct Node* root, int key) {
    
    struct Node* curr = root;
    struct Node* parent = NULL; //to keep track of the to-be parent
    
    while(curr != NULL) {
        
        if(curr->data == key){
            printf("Node is already present in the tree");
            break;
        }
        
        parent = curr;
        
        if(key > curr->data){
            if(curr->rightThread == false)
                curr = curr->right;
            else //means there is no right child of curr
                break;
        }
        else{
            if(curr->leftThread == true)
                curr = curr->left;
            else
                break;
        }
    }
    
    struct Node* newNode = newNode;
    newNode->data = key;
    newNode->leftThread = true;
    newNode->rightThread = false;
    
    if(parent == NULL){
        root = key;
        root->left = NULL;
        root->right = NULL;
    }
    else if(key < parent -> data){
        newNode->left = parent->left;
        newNode->right = parent;
        newNode->leftThread = false;
        parent->left = newNode;
    }
    else{
        newNode->right = parent->right;
        newNode->left = parent;
        newNode->rightThread = false;
        parent->right = newNode;
    }
}

struct Node* findSuccesor(struct Node* root) {
if(root -> rightThread == true){ 
	return root -> right; //straightaway return the parent node if present
}
if(root -> right != NULL){
    while(root -> left != NULL) { //if left child is present return the leftmost node
        root = root -> left;
    }
    return root;
}
return NULL; //if no children are present then this is the last node
}

void printInOrder(struct Node* root) {

    while(root -> left != NULL){
        root = root -> left;
        
    while(root != NULL){
        print(root->data);
        root = findSuccesor(root);
    }
}

// Driver Code
int main()
{
	struct Node* root = NULL;
    root = newNode(1);
    insert(root -> left, 2);
    insert(root -> right, 3);
    insert(root -> left -> left, 4);
    insert(root -> left -> right, 5);

    printInOrder(root);

	return 0;
}

/*
Output:

*/