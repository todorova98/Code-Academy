#include <stdio.h>
int main(){
    char str[] = "Hello";
    str[2] = 'x';
    str[3] = 'x';
    printf("result: %s",str);
    return 0;
}