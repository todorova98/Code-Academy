#include <stdio.h>
int main(){
    int a,b;
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    int sum = 0;
    while(a<=b){        
        sum = sum+a;
        a++;
    }
    printf("Sum = %d",sum);
    return 0;
}