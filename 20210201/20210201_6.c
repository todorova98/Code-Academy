/*Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30.*/
#include <stdio.h>
long long int multiplication(int m, int n);
int main(){
    printf("%ld",multiplication(1,30));
    return 0;
}
long long int multiplication(int m, int n){
    int rez=1;
    for(m; m<=n; m++){
        rez=rez*m;        
    }
    return rez;
}