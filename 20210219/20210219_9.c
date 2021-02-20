/*Задача 9. Направете функця add(), която събира две точки.*/
#include <stdio.h>
struct point{
    int x;
    int y;

};
struct point add(struct point a, struct point b){
    struct point c={a.x+b.x,a.y+b.y};
    return c;
}
int main(){
    struct point point1={2,3};
    struct point point2={4,5};
    struct point point3=add(point1,point2);
    printf("Coordinates of point1: (%d,%d)\n",point1.x,point1.y);
    printf("Coordinates of point2: (%d,%d)\n",point2.x,point2.y);
    printf("Coordinates of point3: (%d,%d)\n",point3.x,point3.y);

    return 0;
}