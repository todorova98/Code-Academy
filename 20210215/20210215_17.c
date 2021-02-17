/*Задача 17. Направете същото, както в задача 18., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема.*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
    char *string1="A string to be copied.";
    char *string3="I am very good in strings coping!";
    char *string2=malloc(sizeof(string1));
    memset(string2, '\0', sizeof(string2));
    char *string4=malloc(sizeof(string3));
    memset(string4, '\0', sizeof(string4));
    strcpy(string2,string1);
    printf("%s\n",string2);
    free(string2);
    strcpy(string4,string3);    
    printf("%s\n",string4);
    string4=realloc(string4, sizeof(string1));
    memset(string4, '\0', sizeof(string4));
    strcpy(string4,string1);
    printf("%s\n",string4);    
    free(string4);
    return 0;
}