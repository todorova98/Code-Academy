#include <stdio.h>
int main(){
    int x=15,p=1,h=1;
    h=h<<p;
    x=x^h;
    printf("%d",x);
    return 0;
}