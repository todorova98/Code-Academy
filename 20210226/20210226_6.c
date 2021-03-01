/*Задача 6. Напишете структура с потребителски тип key_t, която
съдържа символен низ и число.*/
#include <stdio.h>
typedef struct {char *str; int num;} key_t;
int main(){
    key_t struct1 ={"string", 24};
    printf("%s\n%d\n",struct1.str,struct1.num);
    return 0;
}