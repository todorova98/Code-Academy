/*Задача 6.
Опишете времето в структура: часове:минути:секунди като структура tagTMyTime.
Използвайки тази структура, дефинирайте следните функции: 
1.добавяне на секунди,
2.добавяне на минути. 
3.Добавяне на часове към дадена променлива от тип struct tagTMyTime. Напишете следните функции: 
4.връщане на броя секунди за дадена променлива от въведения тип и 
5.обратна функция от секундите да се генерира променлива tagTMyTime. Напишете две функции, които 
6.изваждат и 
7.събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно.*/
#include <stdio.h>
#include <math.h>
struct myTime{
    int hours;
    int minutes;
    int seconds;
};
void addSeconds(struct myTime *time, int s){
    time->seconds+=s;
    while(time->seconds>=60){
        time->minutes+=1;
        time->seconds-=60;
    }
        while(time->minutes>=60){
            time->hours+=1;
            time->minutes-=60;
        }
    
}
void addMinutes(struct myTime *time, int m){
    time->minutes=time->minutes+m;
    while(time->minutes>=60){
        time->hours=time->hours+1;
        time->minutes=time->minutes-60;
    }
}
void addHours(struct myTime *time, int h){
    time->hours+=h;
    while(time->hours>=24){
        time->hours=time->hours-24;
    }
}
int seconds(struct myTime *time){
    return time->seconds;
}
struct myTime *generate(int s){
    struct myTime new;
    struct myTime *p=&new;
    p->hours=s/3600;
    s=s%360;
    p->minutes=s/60;
    p->seconds=s%60;
    while(p->seconds>=60){
        p->minutes+=1;
        p->seconds-=60;
    }    
    while(p->minutes>=60){
        p->hours+=1;
        p->minutes-=60;
    }
    while(p->hours>=24){
        p->hours-=24;
    }
    return p;
}
struct myTime *plus(struct myTime *one, struct myTime *two){
        
    one->seconds=one->seconds+two->seconds;
    one->minutes=one->minutes+two->minutes;
    one->hours=one->hours+two->hours;
    while(one->seconds>=60){
        one->minutes+=1;
        one->seconds-=60;
    }    
    while(one->minutes>=60){
        one->hours+=1;
        one->minutes-=60;
    }
    while(one->hours>=24){
        one->hours-=24;
    }
    return one;
}
struct myTime *minus(struct myTime *one, struct myTime *two){
       
    one->seconds=one->seconds-two->seconds;
    one->minutes=one->minutes-two->minutes;
    one->hours=one->hours-two->hours;
    while(one->seconds<0){
        one->minutes-=1;
        one->seconds=60-abs(one->seconds);
    }    
    while(one->minutes<0){
        one->hours-=1;
        one->minutes=60-abs(one->minutes);
    }
    while(one->hours<0){
        one->hours=24-abs(one->hours);
    }
    return one;
}


int main(){
    struct myTime time;
    struct myTime time2;
    struct myTime *ptr;
    struct myTime *ptr2;
    struct myTime add={0,0,0};
    struct myTime remove;
    struct myTime *addPtr;
    struct myTime *remPtr;
    ptr=&time;
    ptr2=&time2;
    addPtr=&add;
    remPtr=&remove;
    printf("Enter hours:");
    scanf("%d",&time.hours);
    printf("Enter minutes 0-59:");
    scanf("%d",&time.minutes);
    printf("Enter seconds 0-59:");
    scanf("%d",&time.seconds);
    printf("You entered %d:%d:%d\n",time.hours,time.minutes,time.seconds);
    addHours(ptr,2);
    printf("After addHours(): %d:%d:%d\n",time.hours,time.minutes,time.seconds);
    addMinutes(ptr,80);
    printf("After addMinutes(): %d:%d:%d\n",time.hours,time.minutes,time.seconds);
    addSeconds(ptr,70);
    printf("After addSeconds(): %d:%d:%d\n",time.hours,time.minutes,time.seconds);
    printf("seconds() returns %d\n",seconds(ptr));
    
    int s;
    printf("Enter from how many secondds to generate time: ");
    scanf("%d",&s);
    ptr2=generate(s);
    printf("After generate(): %d:%d:%d\n",time2.hours,time2.minutes,time2.seconds);
    
    addPtr=plus(ptr,ptr2);
    printf("After plus() %d:%d:%d\n",addPtr->hours,addPtr->minutes,addPtr->seconds);

    remPtr=minus(ptr,ptr2);
    printf("After minus() %d:%d:%d",addPtr->hours,addPtr->minutes,addPtr->seconds);
    
    return 0;
}
    

