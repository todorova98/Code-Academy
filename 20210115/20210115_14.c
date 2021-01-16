#include <stdio.h>
int gX = 5;
void test(){
    gX++;
}
int main(){
    test();
    test();
    test();
    printf("gX = %d\n",gX);
    return 0;
}

