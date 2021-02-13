/*Задача 8.
Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free())*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr=NULL;
    int n;
    printf("How many elements: ");
    scanf("%d",&n);
    arr=(int *)alloca(n);
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
    return 0;
}