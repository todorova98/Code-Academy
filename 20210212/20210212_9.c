/*Задача 9.
Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr = NULL;
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    arr = (int *)malloc(size);
    if (NULL == arr)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    for(int i=0;i<size;i++){
        arr[i]=i;
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the new size: ");
    scanf("%d", &size);
    arr = realloc(arr, size);
    if (NULL == arr)
    {
        printf("Reallocation memory error!\n");
        exit(2);
    }
    for(int i=0;i<size;i++){
        arr[i]=i;
        printf("%d\t",arr[i]);
    }
    free(arr);
    return 0;
}