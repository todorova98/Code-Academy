// -127, 255, 6 237 498, 4 294 967 292, -9000 000 000 000 775 845
#include <stdio.h>
int main(){
    char x1=-127;
    unsigned char x2=255;
    unsigned int x3 = 6237498;
    unsigned long long x4=4294967292;
    long long x5=-9000000000000775845;
    printf("%d\n",x1);
    printf("%d\n",x2);
    printf("%d\n",x3);
    printf("%lld\n",x4);
    printf("%lld\n",x5);
    return 0;
}