/*Задача 13.
Ако x е реално число, а y — естествено, то степен се
дефинира по следния начин: x на степен y = x.x. ... .x (y пъти)
Когато y < 0, то x на y = 1 / x -y . Валидни са свойствата (x 0):
x y = x y-1 .x x y = x y+1/x x y1+y2 = x y1 .x y2 x y1 .y2 = (x y1 )
y2
Тривиалната реализация за пресмятане на x y е чрез
извършване на y последователни умножения.*/
#include <stdio.h>
int main(){
    double x,sum=1;
    int y;
    printf("Enter x: ");
    scanf("%lf",&x);
    printf("Enter y: ");
    scanf("%d",&y);
    if(y>0){
        for(int i=0; i<y; i++){
            sum*=x;
        }
    } else if (y<0){
        for(int i=0; i<(-y); i++){
            sum*=x;
        }
        sum=1/sum;
    } else sum = 1;
    printf("%f^%d = %f",x,y,sum);
    return 0;
}