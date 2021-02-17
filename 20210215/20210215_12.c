/* Задача 12. Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл. */
#include <stdio.h>
int main(){
    srand((unsigned)time(0));
    int arr[10][10][10];
    int *p=arr;
    int avrg, sum=0;

    for(int i=0; i<1000; i++){
        *(p+i)=rand()%100;
        /*printf("%d\n",*(p+i));*/
        sum+=*(p+i);
    }
    avrg=sum/1000;
    printf("Average: %d",avrg);
    return 0;
}