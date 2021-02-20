/*Задача 7. Направете функция struct point makepoint(int x, int y), която
създава две точки.*/
#include <stdio.h>
struct point{
    int x;
    int y;

};
struct point makepoint (int x, int y){
    struct point a;
    a.x=x;
    a.y=y;
    return a;
}
int main(){
    struct point point1=makepoint(3,5);
    struct point point2=makepoint(6,10);
    printf("Coordinates of point1: (%d,%d)\n",point1.x,point1.y);
    printf("Coordinates of point2: (%d,%d)\n",point2.x,point2.y);
    return 0;
}