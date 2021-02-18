/*Задача 9.
Напишете по 2 тройни цикъла (един и същи код) за масивите.
Хайде да го изнесем във функция.*/
#include <stdio.h>
int arr[10][10][10];
void fillArray( int a[][10][10]){
    int b=0;
   
    for(int i=0; i<10; i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
               a[i][j][k]=b++;
            }
        }
    }
}
void printArray(int a[][10][10]){
    for(int i=0; i<10; i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                printf("%d\n",a[i][j][k]);
            }
        }
    }
}
int main(){
    int arr[10][10][10];
    fillArray(arr);
    printArray(arr);
    return 0;
}