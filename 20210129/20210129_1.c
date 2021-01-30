/*Направете глобална константа pi = 3.14, както правихме в
предишния урок. Напишете функция, която изчислява площта на кръг, на
която като параметър подаваме радиуса и връщаме площта на кръга.
Използвайте глобалната константа pi, за да извършите изчисленията.
Извикайте функцията в main() и покажете резултата.*/
#include <stdio.h>
extern const float pi;
float area(float radius);
int main()
{
    double r, s;
    printf("Enter a radius:\n");
    scanf("%lf", &r);
    s = area(r);
    printf("The area of the circle is %f", s);
    return 0;
}
const float pi = 3.14;
float area(float radius)
{
    return radius * radius * pi;
}
