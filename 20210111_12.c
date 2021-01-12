#include <stdio.h>
int main (){
    int n = 128;
    n = n | 0b001001001;
    printf("%d",n);
    return 0;
}