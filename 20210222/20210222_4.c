/*Задача 4.
Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина.*/
#include <stdio.h>
struct date{
    int day;
    int month;
    int year;
}/*Първи начин да напишем contractdate тук*/;
int main(){
    /*Втори начин на дефиниция на променлива от тим struct date */
    struct date contractdate={22,2,2021}; /*1*/
    printf("%d.%d.%d\n",contractdate.day,contractdate.month,contractdate.year);
    contractdate.day=3;
    contractdate.month=8;
    contractdate.year=1998; /*2*/
    printf("%d.%d.%d\n",contractdate.day,contractdate.month,contractdate.year);
    struct date contractdate1={.year=2020,.month=6,.day=18}; /*3*/
    printf("%d.%d.%d\n",contractdate1.day,contractdate1.month,contractdate1.year);
    return 0;
}