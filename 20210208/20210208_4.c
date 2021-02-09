/*Задача 4. Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float.
Задача 14. 2021.02.05  Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float. */
#include <stdio.h>
int main(){
    int n,sum=0;
    double avrg;
    printf("How many elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n", n);
     for(int i=0; i<n; i++){
        printf("arr [%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    avrg=(double)sum/n;
    printf("Average: %lf",avrg);
    return 0;
}
