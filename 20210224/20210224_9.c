/*Задача 9. Напишете макрос, който прави идентификатор на низ
(стринг)*/
#include <stdio.h>
#define MY_STR(x) #x
int main()
{
    int nValue = 0;
    printf(MY_STR(nValue));
    char s[]=MY_STR(nValue);
    printf("%s",s);
    return 0;
}