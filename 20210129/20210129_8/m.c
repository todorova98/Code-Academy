/* Напишете прототипите на разгледаните досега функции int
add(int a, int b) и int incr(int c) във файла f.h, a телата на функциите във
файла f.c. и използвайте тези функции във файла m.c, където е разписано
тялото на функцията main() . Компилирайте програмата по показания погоре начин. (gcc f.c m.c)*/
#include <stdio.h>
#include "f.h"
int main(){
    int a,b,c;
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    printf("C = ");
    scanf("%d",&c);
    printf("add function: %d\n", add(a,b));
    printf("incr function: %d", incr(c));
    return 0;
}

