/*Задача 16. Напишете програма за умножение на два едномерни
масиви, елемент по елемент. Изведете изходния масив на екрана.*/
#include <stdio.h>
int main()
{
    int n;
    printf("How many elements in the arrays: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter %d elements in arr1:\n", n);
    for (int i = 0; i < n; i++)    {
        printf("arr1 [%d]: ", i);
        scanf("%d", &arr1[i]);
    }
    printf("Enter %d elements in arr2:\n", n);
    for (int i = 0; i < n; i++)    {
        printf("arr2 [%d]: ", i);
        scanf("%d", &arr2[i]);
        arr1[i] *= arr2[i];
    }
    printf("Product:\n");
    for (int i = 0; i < n; i++)    {
        printf("arr [%d]: %d\n", i, arr1[i]);
    }

    return 0;
}