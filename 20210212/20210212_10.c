/*Задача 10*.
Реализация на масив с променлива размерност
Тази задача е подобна на задача 2, където
използваме char масив. Тук може да използвате
друг тип.*/
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