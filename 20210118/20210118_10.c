#include <stdio.h>
int main(){
    int nResult=13;
    int nX=4;
    printf("Result is %d\n",nResult);
    nResult+=nX;
    printf("Result += %d -> %d\n",nX,nResult);

    nResult=1;
    printf("Result is %d\n",nResult);
    nResult<<=nX;
    printf("Result <<= %d -> %d\n",nX,nResult);

    nResult=24;
    printf("Result is %d\n",nResult);
    nResult/=nX;
    printf("Result /= %d -> %d\n",nX,nResult);

    nResult=3;
    printf("Result is %d\n",nResult);
    nResult*=nX;
    printf("Result *= %d -> %d\n",nX,nResult);

    nResult=7;
    printf("Result is %d\n",nResult);
    nResult-=nX;
    printf("Result -= %d -> %d\n",nX,nResult); 

    nResult=9;
    printf("Result is %d\n",nResult);
    nResult%=nX;
    printf("Result %%= %d -> %d\n",nX,nResult);
       
    return 0;
}