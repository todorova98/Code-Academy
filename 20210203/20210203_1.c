/*Задача 1 декларирайте три масива с три елемента:
Първият от тип char
Вторият от тип int
Третият от тип double
Отпечатайте размерите на масивите използвайки
оператора sizeof(arr);*/
#include <stdio.h>
int main(){
    int iArray[3];
    char cArray[3];
    double dArray[3];
    printf("Array type int, 3 elements, size: %d\n",sizeof(iArray));
    printf("Array type char, 3 elements, size: %d\n",sizeof(cArray));
    printf("Array type double, 3 elements, size: %d\n",sizeof(dArray));
    return 0;
}