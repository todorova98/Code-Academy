/*Задача 3.
Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана.*/

#include <stdio.h>
struct product{
    char name[64];
    float price;
    int quantity;
};
int main(){
    struct product a={"chocolate",2.5,50};
    printf("product %s, price %f, quantity %d",a.name,a.price,a.quantity);
    return 0;
}