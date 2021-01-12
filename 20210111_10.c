#include <stdio.h> 
int main(){
    int mask = 255;
    int p = 3;
    int n = 127;
    p = 8-p;
    mask = mask>>p;
    n = n&mask;
    printf("%d",n);
    return 0;
}