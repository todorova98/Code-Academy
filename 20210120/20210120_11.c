#include <stdio.h>
int main () {
    char chCode;
    printf("chCode: ");
    scanf("%c",&chCode);
    printf("Code %c -> ", chCode);
    switch(chCode) {
        case 'x' :
            printf("No\n" );
            break;

        case 'y' :
        case 'z' :
            printf("Maybe\n" );
            break;
        case 'a' :
            printf("Yes\n" ); 
            break;

        default :
            printf("Unknown\n" );
            break;
    }
    return 0;
}