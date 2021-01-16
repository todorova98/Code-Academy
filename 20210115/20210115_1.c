#include <stdio.h>
extern int g_Value;
int main(){
    printf("Global variable = %d",g_Value);
    return 0;
}
int g_Value = 321;
