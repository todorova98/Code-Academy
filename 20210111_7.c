#include <stdio.h>
int main (){
    int n = 255;
    n = n & 0b10101010;
    printf("%d",n);
}