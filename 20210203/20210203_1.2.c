/*Задача 1.2 принтирайте последния елемент от
декларираните по горе масиви:
Първият от тип char
Вторият от тип int
Третият от тип double*/
#include <stdio.h>
int main(){
    int iArray[3]={1,2,3};
    char cArray[3]={'a','b','c'};
    double dArray[3]={1.2,3.4,5.6};
    printf("Array type int, 3 elements, size: %d\n",sizeof(iArray));
    printf("Array type char, 3 elements, size: %d\n",sizeof(cArray));
    printf("Array type double, 3 elements, size: %d\n",sizeof(dArray));
    printf("The third element in iArray: %d\n",iArray[2]);
    printf("The third element in cArray: %c\n",cArray[2]);
    printf("The third element in dArray: %f\n",dArray[2]);
    return 0;
}