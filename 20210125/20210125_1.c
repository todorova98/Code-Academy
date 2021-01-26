#include <stdio.h>
int main(void)
{
    int c, br = 0;
    while ((c = getchar()) != EOF){
        ++br;
    }
    printf("\n%d", br);
    return 0;
}
