#include <stdio.h>
int main(){
    int nValue = 112;
    int nMod3 = nValue % 3;
    if (nMod3==0) {
            printf("%d is divided by 3\n", nValue);
    } else {
            printf("%d is not divided by 3\n", nValue);
    }
    return 0;
}
