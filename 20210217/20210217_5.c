/*Задача 5.
Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни.*/
#include <stdio.h>
int main(){
    srand((unsigned)time(0));
    int arr[5][5];
    for(int row=0; row<5; row++){
        for(int col=0; col<5; col++){
            arr[row][col]=rand()%11;
            if(arr[row][col]>=1 && arr[row][col]<=5){
            printf("arr[%d][%d] = %d\n",row,col,arr[row][col]);
            }
        }
    }
    for(int row=0; row<5; row++){
        for(int col=0; col<5; col++){
            printf("%d ",arr[row][col]);
            }
            printf("\n");
        }
    

    return 0;
}