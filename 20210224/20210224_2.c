/*. Напишете макрос swap(t, x, y), койти променя местата на двата аргумента
от тип t.*/
#include <stdio.h>
#define swap(t,x,y) {\
    t z;\
    z=x;\
    x=y;\
    y=z;\
}

int main(){
    char a='t';
    char b='s';
    printf("a=%c,b=%c\n",a,b);
    swap(char, a,b);
    printf("a=%c,b=%c\n",a,b);
    return 0;
}