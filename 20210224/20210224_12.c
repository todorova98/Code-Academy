/*Задача 12.
Напишете макро GENERIC_MAX(type)
,което трябва да се експандне до следната функция:
int int_max(int x, int y){
return x > y ? x : y;
}
или
float float_max(float x, float y){
return x > y ? x : y;
}
или
char char_max(char x, char y){
return x > y ? x : y;
}*/
#include <stdio.h>
#define GENERIC_MAX(t,x,y)(x > y ? x : y)
int main(){
    printf("%c,%d,%f",(GENERIC_MAX(char, 'b', 't')),(GENERIC_MAX(int, 10, 20)),(GENERIC_MAX(float, 2.5, 5.6)));
    return 0;
}