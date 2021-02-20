/*Задача 6. Направете по подобен начин триъгълник:*/
#include <stdio.h>
int main()
{
    struct point
    {
        int x;
        int y;
    } a, b,c;
    char matrix[15][15];
    printf("\nthe matrix: \n");
    for(int i=0; i<15; i++){
        for (int j=0; j<15; j++){
            matrix[i][j]='-';
            printf("%c ",matrix[i][j]);
        }
        printf("\n");
    }

    a.x = 1;  /* премествам а, за да се получи триъгълник */
    a.y = 4;
    b.x = 7;
    b.y = 10;
    c.x = b.x; /* задавам координати с които да получим правоъгълен триъгълник */
    c.y = a.y;
    matrix[a.x][a.y]='@';
    matrix[b.x][b.y]='@';
    matrix[c.x][c.y]='@';
    printf("\n@ only on point a and b \n");
    for(int i=0; i<15; i++){
        for (int j=0; j<15; j++){
            printf("%c ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n@ in the triangle \n");
    int i=a.x+1;
    int j;
    int n=a.y+2;
    while((i>=a.x && i<=b.x)){
        j=a.y;
        while(j<n){
        matrix[i][j]='@';
        j++;
        }
        i++;
        n++;
    }
    
    for(int i=0; i<15; i++){
        for (int j=0; j<15; j++){
            printf("%c ",matrix[i][j]);
        }
    printf("\n");
    }
       
    
    return 0;
}