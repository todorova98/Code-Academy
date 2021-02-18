/*Задача 22.
Дадена е шахматна дъска 8 х 8 с една фигура кон, в някой от
четирите ъгъла. Напишете програма, която движи коня по
стандартния начин: 2 полета в една посока и едно
перпендикулярно на избраната посока с 2-те полета. Програмата
извежда всеки ход на коня във вида A1, C2, ... и завършва, когато
всички полета на дъската са обходени.*/
#include <stdio.h>

int main(){
    int m,count=0;
    srand((unsigned)time(0));
    char arr[8][8];
    char c='A';
    for(int j=0;j<8;j++){
        for(int i=0;i<8;i++){
            arr[i][j]=c;
        }
        c++;
    }
    printf("This is the board:\n");
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
    int i=7, j=0;
    while(count<64){
    m=rand()%8;
        switch (m){
        case 0: {
            i=i-2;
            j=j+1;
            if(((i>=0 && i<8) && (j>=0 && j<8))&&(arr[i][j]!='.')){
                printf("%c%d\n",arr[i][j],(i+1));
                arr[i][j]='.';
                count++;
            } else {
                i=i+2;
                j=j-1;
                }
            break;
        }
        case 1: {
            i=i-2;
            j=j-1;
            if(((i>=0 && i<8) && (j>=0 && j<8))&&(arr[i][j]!='.')){
                printf("%c%d\n",arr[i][j],(i+1));
                count++;
            } else {
                i=i+2;
                j=j+1;
                }
            break;
        }
        case 2: {
            i=i+2;
            j=j+1;
            if(((i>=0 && i<8) && (j>=0 && j<8))&&(arr[i][j]!='.')){
                printf("%c%d\n",arr[i][j],(i+1));
                count++;
            } else {
                i=i-2;
                j=j-1;
                }
            break;
        }
        case 3:{
            i=i+2;
            j=j-1;
            if(((i>=0 && i<8) && (j>=0 && j<8))&&(arr[i][j]!='.')){
                printf("%c%d\n",arr[i][j],(i+1));
                count++;
            } else {
                i=i-2;
                j=j+1;
                }
            break;
        }
        case 4:{
            i=i+1;
            j=j-2;
            if(((i>=0 && i<8) && (j>=0 && j<8))&&(arr[i][j]!='.')){
                printf("%c%d\n",arr[i][j],(i+1));
                count++;
            } else {
                i=i-1;
                j=j-2;
                }
            break;
        }
        case 5:{
            i=i-1;
            j=j-2;
            if(((i>=0 && i<8) && (j>=0 && j<8))&&(arr[i][j]!='.')){
                printf("%c%d\n",arr[i][j],(i+1));
                count++;
            } else {
                i=i+1;
                j=j+2;
                }
            break;
        }
        case 6:{
            i=i+1;
            j=j+2;
            if(((i>=0 && i<8) && (j>=0 && j<8))&&(arr[i][j]!='.')){
                printf("%c%d\n",arr[i][j],(i+1));
                count++;
            } else {
                i=i-1;
                j=j-2;
                }
            break;
        }
        case 7:{
            i=i-1;
            j=j+2;
            if(((i>=0 && i<8) && (j>=0 && j<8))&&(arr[i][j]!='.')){
                printf("%c%d\n",arr[i][j],(i+1));
                count++;
            } else {
                i=i+1;
                j=j-2;
                }
            break;
        }
        }
    }
    return 0;
}