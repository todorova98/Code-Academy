/*Задача 16.
Имаме 2 сортирани масиви А и В с по 88 елемента.
Образувайте масив С с 2х88 елемента образуван от смесването на А и В,
така че С да съдържа елементите на А и В, но да е подреден и да не се
налага да го сортираме отново.
Насоки: Проверяваме от кой масив да вземем следващия елемент за
слагане в масива /цикъл и проверка./ */
#include <stdio.h>
int main(){
    int a[88],b[88];
    int m=0,n=1;
    for(int i=0;i<88;i++){
        a[i]=m;/* четни числа */
        b[i]=n;/*нечетни*/
        m+=2;  
        n+=2;
        
    }
    int c[176];
    int j=0,k=0;
    for(int i=0;i<176;i++){
        if(a[j]>b[k]){
            c[i]=b[k];
            k++;
        } else {
            c[i]=a[j];
            j++;
        }
        printf("%d\n",c[i]);
    }
    return 0;
}