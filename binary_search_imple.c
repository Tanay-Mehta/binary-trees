#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}node;

void Newnode(int data){
    node *newnode = malloc(sizeof(Node));
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->data = data;
}

void main(void){
    node *root = Newnode(5);
    root->left = Newnode(3);
    root->right = Newnode(8);
    root->left->left = Newnode(1);
    root->left->left = Newnode(4);
    root->right->left = Newnode(6);
    root->right->right = Newnode(9);
}