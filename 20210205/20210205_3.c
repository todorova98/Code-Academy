/*Задача 3.Какво е грешното на този код?
void my_strcpy(char *t, char *s){
for(; *t; t++, s++)
*s = *t;
}*/
#include <stdio.h>
void my_strcpy(char *t, char *s){
for(; *t; t++, s++) /* грешно зададено условие */ 
*s = *t;    /*копира t в с */
}
int main(){
    char s1[]="LONG STRING";
    char s2[]="string";
    my_strcpy(s1,s2);
    printf("my_strcpy:\n");
    printf("s1: %s\n",s1);
           
    return 0;
}
