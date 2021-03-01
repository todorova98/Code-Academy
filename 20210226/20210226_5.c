/*Задача 5 Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата.*/
#include <stdio.h>
typedef int t_arrInt[2][2];
int main(){
    t_arrInt arr={{2,4},{1,3}};
    for(int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            printf("%d\n",arr[i][j]);
        }
    }
    return 0;
}
