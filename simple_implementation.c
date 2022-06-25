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

void main(void){
    Node *root = NULL;
    root = Newnode(5);
    root->left = Newnode(6);
    printf("%i", root->data);
    printf("%i", root->left->data);
}