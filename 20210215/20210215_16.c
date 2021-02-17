/*Задача 16.
Направете същото, както в задача 15?, но използвайки
готовата функция strcpy. Потърсете онлайн как работи
тази функция и какви аргументи приема.
https://www.tutorialspoint.com/c_standard_library/c_function_strcpy.htm*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
    char *string1="A string to be copied.";
    char *string3="I am very good in strings coping!";
    char *string2=malloc(sizeof(string1));
    char *string4=malloc(sizeof(string3));
    strcpy(string2,string1);
    printf("%s\n",string2);
    free(string2);
    strcpy(string4,string3);    
    printf("%s\n",string4);
    string4=realloc(string4, sizeof(string1));
    strcpy(string4,string1);
    printf("%s\n",string4);    
    free(string4);
    return 0;
}