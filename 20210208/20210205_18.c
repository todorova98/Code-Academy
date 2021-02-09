/*Задача 18. Напишете програма за умножение на два тримерни
масива, елемент по елемент.*/
#include <stdio.h>
int main()
{
    int n, m, k;
    printf("n: ");
    scanf("%d", &n);
    printf("m: ");
    scanf("%d", &m);
    printf("k: ");
    scanf("%d", &k);
    int arr1[n][m][k], arr2[n][m][k];
    printf("Enter elements in arr1:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for(int l=0; l<k; l++){
            printf("arr1 [%d] [%d] [%d]: ", i, j, l);
            scanf("%d", &arr1[i][j][l]);
            }
        }
    }
    printf("Enter elements in arr2:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for(int l=0; l<k; l++){
            printf("arr2 [%d] [%d] [%d]: ", i, j, l);
            scanf("%d", &arr2[i][j][l]);
            arr1[i][j][l]*=arr2[i][j][l];
            }
        }
    }
    printf("Product:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for(int l=0; l<k; l++){
            printf("arr [%d][%d][%d]: %d\n", i, j, l, arr1[i][j][l]);
            }
        }
    }

    return 0;
}