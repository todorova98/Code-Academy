/*Задача 3 Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата*/
#include <stdio.h>
#include <stdlib.h>
int *createArray(int n){
    int *p = (int *)malloc(n);
    if (NULL==p)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    return p;
}
int *arraySize(int n){
    int *p=NULL;
    p = realloc(p, n * sizeof(int));
    if (NULL == p)
    {
        printf("Reallocation memory error!\n");
        exit(2);
    }
    return p;
}
int main(){
    int size;
    printf("what size? ");
    scanf("%d",&size);
    int *array;
    array=createArray(size);
    for(int i=0;i<size;i++){
        array[i]=i;
        printf("%d\t",array[i]);
    }
    free(array);
    while(size!=0){
        printf("\nNew size? Press 0 to end. ");
        scanf("%d",&size);
        array= arraySize(size);
        for(int i=0;i<size;i++){
            array[i]=i;
            printf("%d\t",array[i]);
        }
    }
    free(array);
    return 0;
}