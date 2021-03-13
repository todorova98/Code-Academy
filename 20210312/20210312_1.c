/*Задача 1. Реализация на списък. Напишете програма, която добавя и
изтрива елемент от списък по позиция в списъка. */
#include <stdio.h>
#include <stdlib.h>
#include "l.h"

node_t *start;

int main(){
    start=NULL;
    for(int i=15; i>0; i--){
        add(i);
    }
    printf("The list is:\n");
    printList();
    printf("\n");

    printf("what is the position of the element you want to remove?\n");
    int pos,i=0;
    node_t *p=start;
    scanf("%d",&pos);
    while (i<pos)
    {
        if(i==(pos-1)){
            dellElem(p->data);
        }
        i++;
        p=p->next;
    }    
    
    printList();
    printf("\n");
    return 0;
}
