#include <stdio.h>
int vdigniBitNa(int x, int p);
int main(){
    int a=32;
    printf("%d",vdigniBitNa(a,2));
return 0;
}
int vdigniBitNa(int x, int p)
{
    int h=1;
    h=h<<p;
    x=x|h;
    return x;
}