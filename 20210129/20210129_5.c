/*Напишете програма на С, която чрез функция проверява
дали дадено число е четно или не. */
#include <stdio.h>
void isEven(int a);
int main(){
    int a;
    scanf("%d", &a);
    isEven(a);
    return 0;    
}
void isEven(int a){
    if (a%2==0){
        printf("Even number");
    } else printf("Not an even number");
}