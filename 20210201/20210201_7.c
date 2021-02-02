/* Задача 7. Напишете функция, която прави същото, както в задача
6, но е рекурсивна.*/
#include <stdio.h>
long long int recursiveMultiplication(int n);
int main(){
    printf("%ld",recursiveMultiplication(30));
    return 0;
}
long long int recursiveMultiplication(int n){
    int nValue = 1;
    if (n > 1)
    {
        return n*recursiveMultiplication(n-1);
    } 
}
