/*Задача 8.
Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число.*/
#include <stdio.h>
#include <string.h>
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
        printf("Int value -> %d\n", p->n);
    } else if (STRVALUE==t){
        printf("string: -> %s\n", p->str);
    }
}
int main(){
    union un a;
    union un *ptr1=&a;
    enum type t;
    a.n=20;
    t=INTVALUE;
    print(ptr1,t);
    strcpy(a.str,"abc");
    t=STRVALUE;
    print(ptr1,t);
    return 0;
}
