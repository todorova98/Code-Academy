#include <stdio.h>
int vzemiBitNa(int x, int p);
int main(){
    int a=255;
    printf("%d",vzemiBitNa(a,6));
return 0;
}
int vzemiBitNa(int x, int p)
{
    int h=1;
    x=x>>p;
    x=x&h;
    return x;
}