#include <stdio.h>

int main(){
    char cValue = 'b';
    int iValue = 100;
    float fValue=5.56;
    short int sValue=1234;
    unsigned long int lValue=11111111;
    printf("%d\n",sizeof(cValue));
    printf("%d\n",sizeof(iValue));
    printf("%d\n",sizeof(fValue));
    printf("%d\n",sizeof(sValue));
    printf("%d\n",sizeof(lValue));
    return 0;
}