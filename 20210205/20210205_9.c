/*Задача 9. Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s .*/
#include <stdio.h>
void strncpyFunc(char *s, char *t, int n){
    for(int i=0, j=0;i<n; i++, j++){
        s[j]=t[i];
    }
}
int main(){
    char s[100];
    char t[]="strncpy function in C";
    int n;
    printf("How many symbols: ");
    scanf("%d",&n);
    strncpyFunc(s, t, n);
    printf("%s",s);
    return 0;
}