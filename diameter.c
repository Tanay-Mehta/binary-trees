#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}
Node;

Node *Newnode(int data){
    Node *newnode = malloc(sizeof(Node));
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->data = data;
}
Node *root = NULL;
void main(void){
    root = Newnode(5);
    root->left = Newnode(6);
    root->right = Newnode(2);
    root->left->right = Newnode(1);
    root->left->left = Newnode(9);
    root->right->left = Newnode(10);
    root->right->right = Newnode(3);
}