#include <stdio.h>
int main(){
    char s[ ] = "Hi";
    unsigned int i=0;
    while(s[i]!='\0'){
        printf("%c", s[i]);
        i++;
    }
    printf("\ni = %d",i);
    return 0;
}