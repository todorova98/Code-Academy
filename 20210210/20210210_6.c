/*Задача 6. Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи.
Задача 3.Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете – 1.*/
#include <stdio.h>
int linear_search(const int a[], int n, int key){
    int *p=a;
    int *q=&a[n];
    int position=0;
    for(p;p<q;++p){
        if(*p==key){
            return position;
        }
        position++;
    }
    return -1;
}
int main(){
    int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
    printf("%d", linear_search(arr,10,4));
    return 0;
}