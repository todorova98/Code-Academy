#include <stdio.h>
int obarniBitNa(int x, int p);
int main(){
    int a=15;
    printf("%d",obarniBitNa(a,1));
return 0;
}
int obarniBitNa(int x, int p)
{
    int h=1;
    h=h<<p;
    x=x^h;
    return x;
}