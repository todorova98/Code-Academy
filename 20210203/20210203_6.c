/*Задача 6. Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b).*/
#include <stdio.h>
void mySwap(int *a, int *b);
int main(){
    int x=2, y=3;
    int *a;
    int *b;
    a=&x;
    b=&y;
    printf("Values: A = %d, B = %d \n",x,y);
    mySwap(a,b);
    printf("Swapped values: A= %d, B = %d",x,y);
    return 0;
}
void mySwap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}