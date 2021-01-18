#include <stdio.h>
int main() {
int nA, nB, nX, nY;
    printf("A = ");
    scanf("%d",&nA);
    printf("\nB = ");
    scanf("%d",&nB);
    printf("\nX = ");
    scanf("%d",&nX);
    printf("\nY = ");
    scanf("%d",&nY);
    if ( nA > nB && nA !=0 ) {
        printf("&& Operator : Both conditions are true\n");
    }

    if ( nX > nY || nY != 20) {
        printf("|| Operator : Only one condition is true\n");
    }

    if ( ! (nA > nB && nB !=0 ) ) {
        printf(" ! Operator : Both conditions are true\n");
    } else {
        printf("Both conditions are true.\n");
    }
    return 0;
}