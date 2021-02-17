/*Задача 20. Дефинирайте стринг „I am a poor programmer”.
Заменете през пойнтер “poor” с “great”.*/
#include <stdio.h>
int main(){
    char str[]="I am a poor  programmer";
    char *p="great";
    char *q=&str[7];
    while (*p!='\0'){
        *q=*p;
        q++;
        p++;
    }printf("%s",str);
    return 0;
}