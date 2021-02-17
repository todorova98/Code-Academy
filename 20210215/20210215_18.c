/*Задача 18. Връщаме се на кода написан в задача 15?. Нека сега
отпечатаме стринговете с
декрементиране, започвайки отзад-напред.
*to -- = *from --;
Проверете готовата функция strlen.
https://www.tutorialspoint.com/c_standard_library/c_function_strlen.htm
Помислете как да направите проверка във функцията за копиране, дали
размерът на стринга, в който копираме, не е по-малък от размера на
стринга, от който копираме, и какво да се случва тогава.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void copy(char a[], char b[]){
    
    for(int i=0; i<strlen(a);i++){
        b[i]=a[i];
    }
    for(int i=strlen(b);i>=0;i--){
        printf("%c",b[i]);
    }
    
    printf("\n");
}
int main(){
    char string1[]="A string to be copied.";
    char string3[]="I am very good in strings coping!";
    char string2[23];
    char string4[33];
    copy(string1,string2);
    copy(string3,string4);
    copy(string1,string4);
    return 0;
}