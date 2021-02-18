/*Задача 23.
Използване на метода на мехурчето за сортиране на масив от
числа (виж. wiki).
Потребителят въвежда броя числа и след това въвежда всяко
едно число. Напишете програма, която трябва да сортира числата
и да ги изведе в сортиран вид, като най-малкото се извежда първо.
Вариация: Да се направи същото с масив от символи.*/
#include <stdio.h>
#include <string.h>
int main(){
    int sizeS, sizeI;
    printf("Enter size of the string: ");
    scanf("%d",&sizeS);
    char str[sizeS];
    for(int i=0;i<sizeS+1;i++){
        scanf("%c",&str[i]);
    }
    char c;
    for (int i = 0; i < strlen(str)-1; i++){
        for (int j = 0; j < strlen(str)-i-1; j++){
            if (str[j] > str[j+1]){
                c=str[j];
                str[j]=str[j+1];
                str[j+1]=c;
            }
        }
    }
    printf("%s\n",str);
    printf("Enter size of the int array: ");
    scanf("%d",&sizeI);
    int arr[sizeI];
    for(int i=0;i<sizeI;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    for (int j=0; j<sizeI-1; j++){
        for (int i=0; i<sizeI-j; i++){
            if (arr[i]>arr[i+1]){
                k=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=k;
            }
        }
    }
    for(int i=0;i<sizeI;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}