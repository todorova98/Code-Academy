#include <stdio.h>
int main(){
    int nA = 1;
    int nB = ( nA == 1 ? 2 : 0 );
    printf("A value is %d\n", nA); 
    printf("B value is %d\n", nB);

    printf("New value for A: ");
    scanf("%d",&nA);
    nB = ( nA == 1 ? 2 : 0 );
    printf("A value is %d\n", nA); 
    printf("B value is %d\n", nB);
    
    int x,y,max;
    printf("X = ");
    scanf("%d",&x);
    printf("Y = ");
    scanf("%d",&y);
    max = ( x > y ? x : y );
    printf("Bigger number is %d", max);
    return 0;
}