/*Задача 10.
 Напишете функциите като макроси:
1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0));*/
#include <stdio.h>
#include <math.h>
#define AVG(x,y) ((x+y)/2)

#define AVG2(x,y) ((x+y)/2)

#define POW(x,y) (pow(x,y))

#define TOUPPER(c) (c-32);

#define DISP(sqrt,e) printf("sqrt (%g) = %g\n",e,sqrt(e))


int main(){
    int a=AVG(10,20);
    printf("AVG(10,20) = %d\n",a);
    int b=AVG2(10,25);
    printf("AVG2(10,25)=%d\n",b);
    char c = TOUPPER('a');
    printf("TOUPPER('a')=%c\n",c);
    char d = POW(2,3);
    printf("POW(2,3)=%d\n",d);
    DISP(sqrt,3.0);
    return 0;
}