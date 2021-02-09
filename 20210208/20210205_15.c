/*Задача 15. Сумирайте елементите на двумерен масив и намерете
средното по редове и колони. (Представете си, че са ученици в класове)*/
#include <stdio.h>
int main(){
    int n,m;
    printf("Rows: ");
    scanf("%d",&n);
    printf("Columns: ");
    scanf("%d",&m);
    int arr[n][m];
    printf("Enter elements:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("arr [%d] [%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int sum;
    double avrg;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=0; j<m; j++){
            /*row*/
            sum+=arr[i][j];                       
        }
        avrg=(double)sum/m; 
        printf("The average in row %d is %lf\n",i,avrg);
    }
    for(int j=0;j<m;j++){
        sum=0;
        for(int i=0; i<n; i++){
            /*column*/
            sum+=arr[i][j];
                       
        }
        avrg=(double)sum/n; 
        printf("The average in column %d is %lf\n",j,avrg);
    }

    return 0;
}