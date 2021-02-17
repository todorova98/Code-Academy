/*Задача 3.
Дефинирайте и инициализирайте три пойнтера, тип int, тип
float, тип char.*/
#include <stdio.h>
int main(){
    int a=5;
    float b=3.5;
    char c='T';
    int *pA=&a;
    float *pB=&b;
    char *pC=&c;
    printf("%d value %d address\n",*pA,pA);
    printf("%f value %d address\n",*pB,pB);
    printf("%c value %d address\n",*pC,pC);
    return 0;
}