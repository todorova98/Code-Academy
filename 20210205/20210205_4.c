/*Задача 4. Напишете финкцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
елемента в който се различават s[i] е по-малък от t[i] връща стойност помалка от нула < 0. 
Ako s[i] е по-голям от t[i] връща стойност по-голяма от нула > 0*/
#include <stdio.h>
#include <string.h>
int our_strcmp(char *s, char *t){
    for(int i=0; i<strlen(s); i++){
    if(!(s[i]==t[i])){
            return s[i]-t[i];      
        } 
    }
    return 0;
}
int main(){
    char s[]="st!ing";
    char t[]="string";
    printf("%d",our_strcmp(s,t));
    return 0;
}
