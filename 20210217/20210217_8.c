/*Задача 8.
Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1. */
#include <stdio.h>
int *fibo(int *arr,int n){
    
    *arr=0;
    *(arr+1)=1;
    for(int i=2; i<n; i++){
        *(arr+i)=(*(arr+i-1))+(*(arr+i-2));
    }
    return arr;
}
int main(){
    int n;
    printf("How many fibonachi numbers: ");
    scanf("%d",&n);
    int array[n];
    int *p=fibo(array,n);
    for(int i=0; i<n; i++){
        printf("%d\t",array[i]);
    }
    return 0;
}