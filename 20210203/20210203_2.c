#include <stdio.h>
/*Задача 2. Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край.*/
int printArr(int a[], int l){
    for(int i=0; i<l; i++){
        printf("%d\n",a[i]);
    }
}
int main(){
    int a[]={10,20,30,40,50};
    int l = sizeof(a)/sizeof(a[0]);
    printArr(a,l);
    return 0;
}