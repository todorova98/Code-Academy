/* 13. Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length()); */
#include <stdio.h>
int main(){
    char *s="Hello!";
    int length=0;
    while (*s){
        length++;
        s++;
    }
    printf("Length: %d", length);
    return 0;
}
