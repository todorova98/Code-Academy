/*Напишете функцията за добавяне на елемент в дървото рекурсивно
с двоен пойнтер подаван като параметър:
void insertKey(int x, struct tree **T)*/
#include "tree.h"

treeNode_t *root=NULL;

int main(){
    insertKey(22,&root);
    insertKey(18,&root);
    insertKey(31,&root);
    insertKey(16,&root);
    insertKey(20,&root);
    preorder(root);
    return 0;
}

