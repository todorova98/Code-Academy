#include <stdio.h>
int addDigit(int a, int b);
int main(){
    int x = 3, y=5, c;
    c=addDigit(x,y);
    printf("%d",c);
    return 0;
}
int addDigit(int a, int b)
{
    int c;
    c=a+b;
    return c;
}