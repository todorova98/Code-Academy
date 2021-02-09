/*Задача 3. Дефинирайте и инициализирайте тримерен масив с по 5
елемента (5 x 5 x 5).
Задача 18. - 2021.02.05 Дефинирайте и инициализирайте тримерен масив с по 5
елемента (5 x 5 x 5).*/
#include <stdio.h>
int main(){
    int n=0;
    int arr[5][5][5]={{0},{0},{0}};
    printf("Elements in (5x5x5) array:\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            for(int k=0; k<5; k++){
                arr[i][j][k]=++n;
                printf("arr[%d][%d][%d] = %d\n",i,j,k,n);
            }
        }
    }
    return 0;
}