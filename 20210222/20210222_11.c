/*Задача 11.
Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един -7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на
конзолата*/
#include <stdio.h>
#include <string.h>
union data{
    int m;
    int n;
    char str[16];
};
int main(){
    union data un1;
    un1.m=10;
    printf("m: %d\n", un1.m);
    un1.n=5;
    printf("n: %d\n", un1.n);
    strcpy(un1.str,"Hello");
    printf("str: %s\n", un1.str);
    return 0;
}