/*Задача 5. а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @*/
#include <stdio.h>
int main()
{
    struct point
    {
        int x;
        int y;
    } a, b;
    char matrix[15][15];
    printf("\nthe matrix: \n");
    for(int i=0; i<15; i++){
        for (int j=0; j<15; j++){
            matrix[i][j]='-';
            printf("%c ",matrix[i][j]);
        }
        printf("\n");
    }

    a.x = 3;  /* x-i  y-j */
    a.y = 4;
    b.x = 7;
    b.y = 10;
    matrix[a.x][a.y]='@';
    matrix[b.x][b.y]='@';
    printf("\n@ only on point a and b \n");
    for(int i=0; i<15; i++){
        for (int j=0; j<15; j++){
            printf("%c ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n@ in the rectangle \n");
    for(int i=0; i<15; i++){
        for (int j=0; j<15; j++){
            if((i>=a.x && i<=b.x) && (j>=a.y && j<=b.y)){
                matrix[i][j]='@';
            }
            printf("%c ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}