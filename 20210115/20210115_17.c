#include <stdio.h>
const double pi=3.14159;
double s(double r){
    double s=pi*r*r;
    return s;
}

double elipse(double a,double b){
    
    double s=pi*a*b;
    return s;
}

int main(){
    double r1=1;
    double r2=1.5;
    double r3=13;
    printf("r= %f, S= %f\n",r1, s(r1));
    printf("r= %f, S= %f\n",r2, s(r2));
    printf("r= %f, S= %f\n",r3, s(r3));
    printf("r1= %f, r2= %f sElipse = %f\n",r1, r2, elipse(r1,r2));
    return 0;
}