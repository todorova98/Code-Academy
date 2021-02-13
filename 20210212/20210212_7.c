/*Задача 7.
Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr=NULL;
    int n;
    printf("How many elements: ");
    scanf("%d",&n);
    arr=(int *)calloc(n,sizeof(int));
    printf("The elements are: ");
    for(int i=0; i<n; i++){
        printf("%d\t",*(arr+i));
    }
    free(arr);
    return 0;
}