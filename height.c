#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}
Node;
int max(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}
Node *Newnode(int data){
    Node *newnode = malloc(sizeof(Node));
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->data = data;
    return newnode;
}
struct node *root = NULL;
int height(struct node* node)
{
    if (node == NULL)
        return 0;
    else {
        int lDepth = height(node->left);
        int rDepth = height(node->right);
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
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
    printf("%i", height(root));
}
