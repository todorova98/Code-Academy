/*Задача 8. Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета*/
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
struct rect{
    struct point a;
    struct point b;
};
int main(){
    struct rect screen={makepoint(0,0),makepoint(15,15)};
    char matrix[screen.b.x][screen.b.y];
    for(int i=0; i<screen.b.x; i++){
        for(int j=0; j<screen.b.y; j++){
            matrix[i][j]='-';
            printf("%c ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}