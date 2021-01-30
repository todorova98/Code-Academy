#include <stdio.h>
#include <math.h>
unsigned int nok(unsigned int a, unsigned int b)
{
    unsigned int num1 = a;
    unsigned int num2 = b;
    unsigned int num3, nod, nok;
    while (num2 != 0)
    {
        num3 = num2;
        num2 = num1 % num2;
        num1 = num3;
    }
    nod = num1;
    nok = (a * b) / nod;
}
float fAbs(float a){
    if(a<0){
        return -a;
    }
    return a;
}
float squareRoot(float b){
    if(b<0) {
        return sqrt(fAbs(b)); /* return sqrt(fAbs(b)); или return -1; */
    } else return sqrt(b);
}