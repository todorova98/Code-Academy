/*Задача 3.Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете – 1.*/
#include <stdio.h>
int linSearch(int a[], int l, int d)
{
    int i = 0;
    while (i < l)
    {
        if (a[i] == d)
        {
            return i;
        }

        i++;
    }
    return -1;
}
int main()
{
    int a[] = {11, 22, 33, 44, 55, 66};
    int l = sizeof(a)/sizeof(a[0]);
    int d;
    printf("Enter number: ");
    scanf("%d", &d);
    printf("The number %d is on position %d in the array", d, linSearch(a, l, d));
    return 0;
}