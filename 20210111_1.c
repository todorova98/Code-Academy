#include <stdio.h>
int main(){
    int a = 3, b=5, rez;
    rez=a&b;
    printf("%d\n",rez);
    rez=a|b;
    printf("%d\n",rez);
    rez=a^b;
    printf("%d\n",rez);
    return 0;
}