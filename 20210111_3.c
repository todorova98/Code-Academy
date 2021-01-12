#include <stdio.h>
int iz4istiBitNa(int x, int p);
int main(){
    int a=255;
    printf("%d",iz4istiBitNa(a,4));
return 0;
}
int iz4istiBitNa(int x, int p)
{
    int h = 1;
    h = h<<p;
    x=x^h;
    return x;
}