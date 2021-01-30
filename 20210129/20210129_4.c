/* Напишете функция, която връща резултат a*2 + b*c. */
#include <stdio.h>
int func4(int a,int b, int c);
int main(){
    int a,b,c,d;
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    printf("C = ");
    scanf("%d",&c);    
    d=func4(a,b,c);
    printf("D = a*2 + b*c = %d",d);
    return 0;
}
int func4(int a, int b, int c){
    return a*2 + b*c;
}