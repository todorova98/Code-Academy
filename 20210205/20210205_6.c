/*Задача 6. Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j.*/
#include <stdio.h>
void our_strcat(char *s, char *t){
    while(*s != '\0'){
    *s++;
    }
    while( *t!='\0' ){
    *s++ = *t++;
    }
}
int main(){
    char s[100]="Which is this task?\n";
    char t[]="Hello!\nThis is the 5th task.";
    our_strcat(s,t);
    printf("%s",s);
    return 0;
}