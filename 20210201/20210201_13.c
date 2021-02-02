/*Задача 13 напишете функцията void lower(char s[]), която
преобразува главните букви в малки.*/
#include<stdio.h>
void lower(char *s);
int main(){
    char s[]="BIG LETTERS are now SMALL";
    lower(s);
    printf("%s",s);

}
void lower(char *s){
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
}