/*Задача 1. Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте.*/
#include <stdio.h>
typedef struct struct1 {int iNum; float fRate;} t_Str1;
int main(){
    t_Str1 str1={20,6.8};
    printf("%d\n%f\n",str1.iNum,str1.fRate);
    return 0;
}
