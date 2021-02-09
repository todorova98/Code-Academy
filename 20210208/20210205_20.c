/*Задача 20. Проверете дали сумата от елементите на два тримерни
масива са еднакви. Използвайте задачата която сумира елементите на
масив, която правихме по горе за да получите едно сумите на двата
тримерни масива и след това сравнявайте сумите. Тази задача е
подходяща при наличието на голям брой данни (матрици тримерно) те да
бъдат подредени по някакъв признак.*/
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
    int sum1=0, sum2=0;
    printf("Enter elements in arr1:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for(int l=0; l<k; l++){
            printf("arr1 [%d] [%d] [%d]: ", i, j, l);
            scanf("%d", &arr1[i][j][l]);
            sum1+=arr1[i][j][l];
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
            sum2+=arr2[i][j][l];
            }
        }
    }
    if(sum1>sum2){
        printf("The sum of the elements in arr1 is %d and it's bigger", sum1);
    } else if (sum2>sum1){
        printf("The sum of the elements in arr2 is %d and it's bigger", sum2);
    } else printf("Equal!");

    return 0;
}