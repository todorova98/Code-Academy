/*Задача 15.Опишете времето: часове:минути:секунди като структура
tagTMyTime. Използвайки тази структура, дефинирайте следните функции:
добавяне на секунди, добавяне на минути. добавяне на часове към дадена
променлива от тип struct tagTMyTime. Напишете следните функции:
връщане на броя секунди за дадена променлива от въведения
тип и обратна функция от секундите да се генерира променлива
tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно.*/
#include <stdio.h>
struct myTime{
    int hours;
    int minutes;
    int seconds;
};
void addSeconds(struct myTime *time, int s){
    time->seconds+=s;
    if(time->seconds>=60){
        time->minutes+=1;
        time->seconds-=60;
        if(time->minutes>=60){
            time->hours+=1;
            time->minutes-=60;
        }
    }
}
void addMinutes(struct myTime *time, int m){
    time->minutes=time->minutes+m;
    if(time->minutes>=60){
        time->hours=time->hours+1;
        time->minutes=time->minutes-60;
    }
}
struct myTime addHours(struct myTime *time, int h){
    time->hours+=h;
    if(time->hours>=24){
        time->hours=time->hours-24;
    }
}
int main(){
    struct myTime time;
    struct myTime *ptr;
    ptr=&time;
    int choice=4;
    int a;
    printf("Enter hours:");
    scanf("%d",&time.hours);
    printf("Enter minutes 0-59:");
    scanf("%d",&time.minutes);
    printf("Enter seconds 0-59:");
    scanf("%d",&time.seconds);
    printf("You entered %d:%d:%d\n",time.hours,time.minutes,time.seconds);
    while(choice!=0){
        printf("You entered %d:%d:%d\n",time.hours,time.minutes,time.seconds);
        printf("Do you want to add hours(1), minutes(2) or seconds(3), press 0 to exit.");
        scanf("%d",&choice);
        if(choice==1){
            printf("Enter hours to add:");
            scanf("%d",&a);
            addHours(ptr,a);
        }
        if(choice==2){
            printf("Enter minutes to add:");
            scanf("%d",&a);
            addMinutes(ptr,a);
        }
        if(choice==3){
            printf("Enter seconds to add:");
            scanf("%d",&a);
            addSeconds(ptr,a);
        }
    }
    return 0;
}