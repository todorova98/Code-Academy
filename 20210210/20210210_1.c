/*Задача 1. Напишете програма, която сумира всички елементи на масив
намиращи се на нечетна позиция:
int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
Декларирайте пойнтер към първата нечетна позиция, инкрементирайте
пойнтера по подходящ начин, за да извършите сумирането.*/
#include <stdio.h>
int main(){
    int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
    int *p=&arr[1]; /* i=1,3,5,7,9 */
    /* int *p=&arr[0] ако не броим "нулева" позиция */
    int sum=0;
    while(*p){
        sum+=*p;
        p+=2;
    }
    printf("The sum is %d",sum);
    return 0;

}
