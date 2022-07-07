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
void search(int value){
    struct node *root_ref = root;
    while(root_ref!=NULL){
        if(root_ref->data==value){
            printf("found");
            break;
        }
        else if(root_ref->data>value){
            
            root_ref = root_ref->left;
        }
        else if(root_ref->data<value){
            
            root_ref = root_ref->right;
        }
        }
    
}
void main(void){
    root = Newnode(5);
    root->left = Newnode(3);
    root->right = Newnode(7);
    root->left->left = Newnode(1);
    root->left->right = Newnode(4);
    root->right->left = Newnode(6);
    root->right->right = Newnode(8);
    search(1);
}
