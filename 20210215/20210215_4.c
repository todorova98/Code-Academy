/*Задача 4.
Дефинирайте пойнтер и опитайте да отпечатате стойността
му на конзолата (%р) с printf.
Какво се визуализира?*/
#include <stdio.h>
int main(){
    int a=23;
    int *pA=&a;
    printf("%p\n",pA);  /*000000000061FE14*/
    printf("%p\n",*pA); /*0000000000000017*/
    return 0;
}