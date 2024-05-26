//    gcc -o main main.c tree.c

#include <stdio.h>
#include "tree.h"

int main()
{
    struct tree* head1 = NULL;
    
    insert(&head1, 50);
    insert(&head1, 80);
    insert(&head1, 30);
    insert(&head1, 20);
    insert(&head1, 40);
    insert(&head1, 38);
    
    printf("head1->data = %d\n", head1->data);
    printf("head1->right->data = %d\n", head1->right->data);
    printf("head1->left->data = %d\n", head1->left->data);
    printf("head1->left->left->data = %d\n", head1->left->left->data);
    printf("head1->left->right->data = %d\n", head1->left->right->data);
    printf("head1->left->right->left->data = %d\n", head1->left->right->left->data);
    return 0;
}


