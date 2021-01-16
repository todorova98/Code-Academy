#include <stdio.h>

double s(double r){
    const double pi=3.14159;
    double s=pi*r*r;
    return s;
}
int main(){
    double r1=1;
    double r2=1.5;
    double r3=13;
    printf("r= %f, S= %f\n",r1, s(r1));
    printf("r= %f, S= %f\n",r2, s(r2));
    printf("r= %f, S= %f\n",r3, s(r3));
    return 0;
}