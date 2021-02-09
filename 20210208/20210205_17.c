/*Задача 17. Напишете програма за умножение на два двумерни
масиви, елемент по елемент.*/
#include <stdio.h>
int main()
{
    int n, m;
    printf("How many rows in the arrays: ");
    scanf("%d", &n);
    printf("How many columns in the arrays: ");
    scanf("%d", &m);
    int arr1[n][m], arr2[n][m];
    printf("Enter elements in arr1:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("arr1 [%d] [%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter elements in arr2:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("arr2 [%d] [%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
            arr1[i][j] *= arr2[i][j];
        }
    }
    printf("Product:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("arr [%d][%d]: %d\n", i, j, arr1[i][j]);
        }
    }

    return 0;
}
