/*Задача 12. Напишете функция, която изчислява разстоянието между две
точки в равнината. Нека функцията да приема два параметъра, които са
структури ТPoint с два члена X и Y координати.*/
#include <stdio.h>
#include <math.h>
struct point
{
    int x;
    int y;
};

double length (struct point a, struct point b){
    double l;
    l=(double)((b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y));
    l=sqrt(l);
    return l;
}
int main(){
    struct point a={1,2};
    struct point b={9,8};
    double l=length(a,b);
    printf("The distance between a(%d,%d) and b(%d,%d) is %lf",a.x,a.y,b.x,b.y,l);
    return 0;
}