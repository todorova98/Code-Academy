/*Задача 4.
Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr=NULL;
    int n;
    printf("How many elements: ");
    scanf("%d",&n);
    arr=(int *)malloc(n);
    if (NULL==arr)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    printf("Enter elements: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements are: ");
    for(int i=0; i<n; i++){
        printf("%d\t",*(arr+i));
    }
    free(arr);
    return 0;
}