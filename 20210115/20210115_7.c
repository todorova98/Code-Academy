#include <stdio.h>
int main(){
    double d = 0xBB;
    signed long long i = 0xBB;
    unsigned long long a = 0xBBu;
    printf("d=%f, i=%lld, a = %lld\n",d , i, a);
    return 0;
}