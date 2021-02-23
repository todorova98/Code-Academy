/*Задача 12.
Напишете програма, която използва битови полета. Битовите полета да
са членове на структура и да са от следните типове: unsigned int и char.
Задайте им размер short int 3 бита, char 6 бита. struct <tagStruct> {
Ctype m_bitField : N;
CType2 m_bitField2 : M;
};
Дефинирайте променлива на структурата и инициализирайте ги със
стойност 7 и съответно ‘c’.
Разпечатайте елементите. Разпечатайте и големината на структурата.
Добавете още членове от съществуващите типове и разпечатайте
големината на структурата отново. Пренаредете ги като
последователност, да са char, char, short int, short int. Как се променя
големината на структурата?
Опитайте същото с препроцесор #pragma pack(1).*/
#include <stdio.h>
#pragma pack(1)
struct bitStruct{
    short int siVal:3;
    short int siVal2:3;
    char chVal:6;
    char chVal2:6;
}/*__attribute__((packed))*/;
int main(){
    struct bitStruct a ={.siVal = 7, .chVal='c'};
    printf("a.siVal = %d\n", a.siVal);
    printf("a.chVal = %c\n", a.chVal);
    printf("sizeof(a) = %d\n",sizeof(a));
}