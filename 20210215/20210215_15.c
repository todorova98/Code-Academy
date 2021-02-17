/*Задача 15.
Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга, в които ще копираме string 2,
string4. Дефинирайте функция, която през пойнтери ще извърши
копирането от стринг към стринг. Използвайте while и факта, че
*pointer++ отива към следващия символ.
Помислете за терминиращия символ. Принтирайте двата изкопирани
стринга.
Извикайте функцията и копирайте от string1 в string4.*/
#include <stdio.h>
#include <stdlib.h>
void copy(char *a, char *b){
    while(*a!='\0'){
        /* *++to= *++from; дава memory error*/
        *b=*a;
        a++;
        b++;
    }
    *b='\0';
}
int main(){
    char *string1="A string to be copied.";
    char *string3="I am very good in strings coping!";
    char *string2=malloc(sizeof(string1));
    char *string4=malloc(sizeof(string3));
    copy(string1,string2);
    printf("%s\n",string2);
    free(string2);
    copy(string3,string4);    
    printf("%s\n",string4);
    string4=realloc(string4, sizeof(string1));
    copy(string1,string4);
    printf("%s\n",string4);    
    free(string4);
    return 0;
}