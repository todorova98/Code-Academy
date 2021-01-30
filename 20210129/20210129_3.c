/* Напишете функция, която връща резултат (а+в)*4 */
#include <stdio.h>
int func3(int a,int b);
int main(){
    int a,b,c;
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    c=func3(a,b);
    printf("C = (a+b)*4 = %d",c);
    return 0;
}
int func3(int a, int b){
    return (a+b)*4;
}