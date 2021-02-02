/*Задача 11 напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[]*/
#include <stdio.h>
#include <string.h>
void squeeze(char s[], int c);
int main(){
    char str[]="Hello!";
    squeeze(str,3);
    return 0;
}
void squeeze(char s[], int c){
    for(int i=c; i<strlen(s);i++){
        s[i]=s[i+1];

        }
        printf("%s",s);
    }
