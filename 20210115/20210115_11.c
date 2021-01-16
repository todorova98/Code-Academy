#include <stdio.h>
int main(){
    char str[] = "Hello";
    char rst[sizeof(str)];
    rst[0]=str[4];
    rst[1]=str[3];
    rst[2]=str[2];
    rst[3]=str[1];
    rst[4]=str[0];
    printf("string backwards: %s",rst);
    return 0;
}