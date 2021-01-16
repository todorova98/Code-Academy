#include <stdio.h>

void test(){
    static int x=1;
    x++;
    printf("x = %d\n",x);
}
int main(){    
    test();
    test();
    test();
    
    return 0;
}
