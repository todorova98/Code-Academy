/*Задача 13.
Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.*/
#include <stdio.h>
union un{
    unsigned short usVal:6;
    char chVal:6;
};
int main(){
    union un testUn;
    printf("size of testUn: %d\n",sizeof(testUn));
    testUn.usVal=10;
    printf("testUn.usVal: %d\n",testUn.usVal);
    testUn.chVal='c';
    printf("testUn.chVal: %c\n",testUn.chVal);
    return 0;
}