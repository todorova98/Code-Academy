#include <stdio.h>
int main (){
    int n = 255;
    n = n & 0b10001111;
    printf("%d",n);
    return 0;
}