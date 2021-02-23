/*Задача 10.
Използвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура.*/
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
struct testStruct{
    union un un1;
    enum type t1;
};
void print(struct testStruct *p){
    if(INTVALUE==p->t1){
        char s[64];
        itoa(p->un1.n,s,10);
        printf("Int value -> %d, converted string: %s\n", p->un1.n,s);
    } else if (STRVALUE==p->t1){
        int i=atoi(p->un1.str);
        printf("string: -> %s, converted to num: %d\n", p->un1.str,i);
    }
}
int main(){
    struct testStruct a;
    struct testStruct *ptr1=&a;
    a.un1.n=20;
    a.t1=INTVALUE;
    print(ptr1);
    strcpy(a.un1.str,"1000");
    a.t1=STRVALUE;
    print(ptr1);
    return 0;
}