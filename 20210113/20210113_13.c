#include <stdio.h>
int main(){
    char a;
    int b;
    long c;
    float d;
    double e;
    a='a';
    b=102;
    c=50000;
    d=6;
    e=-48.907;
    printf("a = %c, size of a = %d\n",a,sizeof(a));
    printf("b = %d, size of b = %d\n",b,sizeof(b));
    printf("c = %d, size of c = %d\n",c,sizeof(c));
    printf("d = %f, size of d = %d\n",d,sizeof(d));
    printf("e = %f, size of e = %d",e,sizeof(e));
    return 0;
}