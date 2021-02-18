/*Задача 6.
Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ....";*/
#include <stdio.h>
int charCount(char *s, char a){
    int count=0;
    while(*s!='\0'){
        if(*s==a){
            count++;
        }
        s++;
    }
    return count;
}
int main(){
    char *s="This is a string to test my idea for search in a char and ....";
    int (*p)(char *,char);
    p=charCount(s,'a');
    printf("%d",*p);
    return 0;
}