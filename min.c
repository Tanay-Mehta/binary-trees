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
    return newnode;
}
struct node *root = NULL;
void min(void){
    struct node *root_ref = root;
    while(root_ref->left!=NULL){
        root_ref = root_ref->left;
    }
    printf("%i", root_ref->data);
}
void main(void){
    root = Newnode(10);
    root->left = Newnode(5);
    root->right = Newnode(15);
    root->left->left = Newnode(4);
    root->left->right = Newnode(8);
    root->right->left = Newnode(12);
    root->right->right = Newnode(20);
    min();
}
