/*Задача 8. Напишете макрос, който свързва два идентификатора в
един общ (конкатениране на идентификатори)*/
#include <stdio.h>
#define MY_CONCAT(x,y) x##y
int main() {
    MY_CONCAT(print,f)("\nThis is test\n");
    MY_CONCAT(i,nt) x = 65;
    MY_CONCAT(print,f)("%d",x);
    return 0;
}