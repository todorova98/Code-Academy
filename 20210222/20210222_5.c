/*Задача 5.
Направете масив от 10 структури от задача 4. Задайте стойност на 10 -те дати, по избор.
struct name array[10];  define array 
array[i].member = value; /* set member value 
struct name array[10]= { {1,3,2019}, {3,4,2020}} /* define and init array members 
struct name array[10] = { [1] = {3,4,2020} }; /* define and init array members 
struct name array[10] = {[1].month = 4,[1].year = 2020}; /* define and init array members */
#include <stdio.h>
struct date{
    int day;
    int month;
    int year;
};
int main(){
    struct date array[10]={{1,2,2003},{24,8,2013}, [2]={12,5,2010},[4].day=5,[4].month=12,[4].year=2020};
    array[3].day=10;
    array[3].month=10;
    array[3].year=2021;
    int d=1,m=1,y=2001;
    for(int i=5; i<10; i++){
        array[i].day=d++;
        array[i].month=m++;
        array[i].year=y++;
    }
    for(int i=0; i<10; i++){
        printf("%d.%d.%d\n",array[i].day,array[i].month,array[i].year);
    }
    return 0;
}