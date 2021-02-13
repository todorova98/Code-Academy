#include <stdio.h>
#include <stdlib.h>
/*Задача 1. Да се направи програма, която заделя динамичен масив с брой елементи
зададени от потребителя. За всеки елемент от масива се очаква потребителят да въведе
цяло и число и след това се изчислява сумата на всички елементи от масива.*/
int main(){
    unsigned n = 0;
    int *piValues=NULL;
    int sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    piValues = (int *)malloc(n);
    if (NULL==piValues)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    printf("Enter elements: ");
    for(int i=0; i<n; i++){
        scanf("%d",&piValues[i]);
        sum+=piValues[i];
    }
    printf("Sum is %d", sum);
    free(piValues);
    return 0;
}
