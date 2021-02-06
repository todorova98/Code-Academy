/*Задача 10. Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s.*/
#include <stdio.h>
#include <string.h>
void strncatFunc(char *s, char *t, int n){
    for(int i=0, j=strlen(s);i<n; i++, j++){
        s[j]=t[i];
    }
}
int main(){
    char s[100]="Hello!";
    char t[]="strncat function in C";
    int n;
    printf("How many symbols: ");
    scanf("%d",&n);
    strncatFunc(s, t, n);
    printf("%s",s);
    return 0;
}