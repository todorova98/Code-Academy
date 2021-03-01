/*Задача 3. Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип.*/
#include <stdio.h>
typedef long long int t_LLInt;
typedef long long int * t_ptrLLInt;
int main(){
    printf("size of t_LLInt: %d\n",sizeof(t_LLInt));
    t_LLInt a=1000;
    t_ptrLLInt p=&a;
    printf("%ld\n",*p);
    return 0;
}