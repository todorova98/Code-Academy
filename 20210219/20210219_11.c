/*Задача 11. Дефинирайте структура, в която има член указател към самата
структура. Използвайте тази структура, за да дефинирате две променливи,
които се указват една друга.*/
#include <stdio.h>
struct testStruct{
    int num;
    struct testStruct *ptr;
};
int main(){
    struct testStruct str1;
    struct testStruct str2;
    str1.num=3;
    str1.ptr=&str2;
    str2.num=5;
    str2.ptr=&str1;
    printf("str1.num=%d str1.ptr->%d\n",str1.num, str1.ptr->num);
    printf("str2.num=%d str2.ptr->%d\n",str2.num, str2.ptr->num);
    return 0;
}