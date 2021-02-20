/*Задача 10. Направете два триъгълника с отместване.*/
#include <stdio.h>
int main()
{
    struct point
    {
        int x;
        int y;
    } a, b,c,p,q,t;
    char matrix[20][20];
    printf("\nthe matrix: \n");
    for(int i=0; i<20; i++){
        for (int j=0; j<20; j++){
            matrix[i][j]='-';
            printf("%c ",matrix[i][j]);
        }
        printf("\n");
    }

    a.x = 1;  
    a.y = 4;
    b.x = 7;
    b.y = 10;
    c.x = b.x; 
    c.y = a.y;
    matrix[a.x][a.y]='@';
    matrix[b.x][b.y]='@';
    matrix[c.x][c.y]='@';
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
    p.x = a.x+10;  
    p.y = a.y;
    q.x = b.x+10;
    q.y = b.y;
    t.x = q.x; 
    t.y = p.y;
    matrix[p.x][p.y]='@';
    matrix[p.x][p.y]='@';
    matrix[p.x][p.y]='@';
    printf("\n@ in the triangle \n");
    i=p.x+1;
    n=p.y+2;
    while((i>=p.x && i<=q.x)){
        j=p.y;
        while(j<n){
        matrix[i][j]='@';
        j++;
        }
        i++;
        n++;
    }



    
    
    for(int i=0; i<20; i++){
        for (int j=0; j<20; j++){
            printf("%c ",matrix[i][j]);
        }
    printf("\n");
    }
       
    
    return 0;
}