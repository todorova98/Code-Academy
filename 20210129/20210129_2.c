/*Напишете функция area() без параметри. Поискайте от
потребителя да въведе радиуса с помощта на функциите :
printf("Enter a radius\n");
scanf("%lf", &r);
Използвайте горната функция 1.за изчисляване на площта на кръг,
която написахме преди малко за да изчислите площта на кръга с този
радиус и върнете резултата: */
#include <stdio.h>
extern const float pi;
float area();
int main(){
    float s;
    s=area();
    printf("The area of the circle is %f",s);
    return 0;
}
const float pi = 3.14;
float area(void){
    float radius;
    printf("Enter a radius: ");
    scanf("%f", &radius);
    return radius*radius*pi;   
}