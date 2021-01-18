#include <stdio.h>
int main(){
    int iX=13;
    int iY=44;
    int iResult=0;
    iResult= iX-iY;
    printf("%d - %d = %d\n",iX, iY, iResult);

    iResult= iX/iY;
    printf("%d / %d = %d\n",iX, iY, iResult);

    iResult= iX%iY;
    printf("%d / %d Remainder %d\n",iX, iY, iResult);

    iResult= iX*iY;
    printf("%d * %d = %d\n",iX, iY, iResult);

    iResult= iX+iY;
    printf("%d + %d = %d\n",iX, iY, iResult);    
    printf("\n");
    float fX = 2.6;
    float fY = 5.4;
    float fResult = 0;
    fResult= fX-fY;
    printf("%f - %f = %f\n",fX, fY, fResult);

    fResult= fX/fY;
    printf("%f / %f = %f\n",fX, fY, fResult);

    fResult= fX*fY;
    printf("%f * %f = %f\n",fX, fY, fResult);

    fResult= fX+fY;
    printf("%f + %f = %f\n",fX, fY, fResult);    
    return 0;
}