#include <stdio.h>
int main(){
    char str[] = "HELLO";
    str[0] = 'h';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    printf("result: %s",str);
    return 0;
}