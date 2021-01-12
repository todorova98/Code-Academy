#include <stdio.h>
int main (){
    int n=29,sum,r,x=0;
    printf("n=%d=",n);
    while (n>0){
        r=n%2;     
        if(r==1){
            printf("2^%d + ",x);
        }
        n=n/2;
        x++;
    }    
    return 0;
}