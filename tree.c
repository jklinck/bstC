#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

void insert(struct tree** head, int nodeData){
    struct tree* newNode = malloc(sizeof(struct tree));
    newNode->data = nodeData;
    newNode->left = NULL;
    newNode->right = NULL;
    
    if(*head == NULL){
       *head = newNode;
    }
    
    struct tree* current = *head;
    
    if(nodeData < (*head)->data){
        if((*head)->left != NULL){
            current = (*head)->left;
            insert(&current, nodeData);
        }
        else{
            (*head)->left = newNode;
        }
    }
    
    if(nodeData > (*head)->data){
        if((*head)->right != NULL){
            current = (*head)->right;
            insert(&current, nodeData);
        }
        else{
            (*head)->right = newNode;
        }
    }
}





