/*Задача 9.
Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
enum type{
    INTVALUE,
    STRVALUE
    
};
union un{
    int n;
    char str[64];
};
void print(union un *p, enum type t){
    if(INTVALUE==t){
        char s[64];
        itoa(p->n,s,10);
        printf("Int value -> %d, converted string: %s\n", p->n,s);
    } else if (STRVALUE==t){
        int i=atoi(p->str);
        printf("string: -> %s, converted to num: %d\n", p->str,i);
    }
}
int main(){
    union un a;
    union un *ptr1=&a;
    enum type t;
    a.n=20;
    t=INTVALUE;
    print(ptr1,t);
    strcpy(a.str,"1000");
    t=STRVALUE;
    print(ptr1,t);
    return 0;
}