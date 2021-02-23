/*Задача 14.
Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.*/
#include <stdio.h>
struct date{
    int day:6;
    int month:6;
    int year:12;
};
void print(struct date *p){
    printf("%d.%d.%d\n",p->day,p->month,p->year);
}
struct date *validation(struct date *p){
    struct date wrong={0,0,0};
    struct date *q=&wrong;
    if(p->year>=1900){
        if (p->month>=1 && p->month<=12){
            if((p->day>=1 && p->day <=31) && (p->month==1 || p->month==3 || p->month==5 || p->month==7 || p->month==8 || p->month==10 || p->month==12)){
                return p;
            } else if((p->day>=1 && p->day<=30) && (p->month==4 || p->month==6 || p->month==9 || p->month==11)){
                return p;
            } else if (p->day==29 && p->month==2 && (p->year%400==0 ||(p->year%4==0 && p->year%100!=0))){
                return p;
            } else return q;
        } else return q;
    } else return q;
}
int main(){
    struct date a={30,12,2020};
    struct date *ptr=&a;
    print(ptr);
    return 0;
}