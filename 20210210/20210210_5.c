/*Задача 5. Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i:
int sum_array(const int a[], int n){
int i, sum = 0;
for(i = 0; i < n; i++){
sum += a[ i ];
return sum;
}*/
#include <stdio.h>
int sum_array(int *a){
    int sum=0;
    while (*a){
        sum+=*a;
        a++;
    }
    return sum;
}
int main(){
    int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
    printf("%d",sum_array(arr));
}
