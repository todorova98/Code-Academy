/*Задача 11.
Напишете програма, която умножава 2 числа, като
използва пойнтер-и.
Пойнтер-ите не са страшни. Дефинират се като
тип *Х и се използват като *Х. Както променливите,
но със * отпред (и 1 наум!).
Продължение: Опитайте да умножите 2 променливи от
различен тип, използвайки пойнтери.*/
#include <stdio.h>
int main(){
    int a=2, b=5;
    float c=4.5;
    int *pA=&a;
    int *pB=&b;
    float *pC=&c;
    printf("%d\n", *pA * *pB); /*10*/
    printf("%f\n", *pA * *pC); /*9.000000*/
    return 0;
}