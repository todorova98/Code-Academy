/*Задача 11 напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[]*/
#include <stdio.h>
#include <string.h>
void squeeze(char s[], int c);
int main(){
    char str[]="Hello!";
    squeeze(str,'l');
    return 0;
}
void squeeze(char s[], int c){
    int j=0;
    for(int i=0; i<strlen(s);i++){
            if(s[i]!=c){
                s[j]=s[i];
                j++;
            }
        }
        s[j]='\0';
        printf("%s",s);
    }
