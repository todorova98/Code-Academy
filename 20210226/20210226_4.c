/*Задача 4 Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност.*/
#include <stdio.h>
typedef int * t_ptrInt;
int add(t_ptrInt a, t_ptrInt b){
    return *a+*b;
}
typedef int (*t_fAdd)(t_ptrInt,t_ptrInt);
int main(){
    int a=5,b=6;
    t_ptrInt p=&a;
    t_ptrInt q=&b;
    t_fAdd fPtr=&add;
    printf("%d",fPtr(p,q));
    return 0;
}