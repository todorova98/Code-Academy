/*Задача 1. Направете две функции и извикайте желаната функция с
указател към функция, съобразно знака, подаден от командния ред: а.оut
20 + 3*/
#include <stdio.h>
#include <stdlib.h>
int fnPlus(int nA, int nB) { return (nA + nB); } /* функции */
int fnMinus(int nA, int nB) { return (nA - nB); }
int main(int argc, char *argv[])
{
    int (*pfCalc)(int, int) = NULL; /* пойтер към функция с два аргумента инт */
    if (argc < 4) /* 0,1,2,3 аргумента: а.ехе, +/-, число, число */
    {
        printf("\nUsage: %s +/- arg1 arg2\n", argv[0]);
    }
    else if ('-' == argv[1][0]) /*ако напишем - */
    {                       
        pfCalc = fnMinus;          /* пойнтера да сочи към фМинус ф-цията */ 
    }
    else if ('+' == argv[1][0])  /* ако напишем + */
    {
        pfCalc = fnPlus;     /* пойнтера да сочи към фПлюс*/
    }
    (NULL == pfCalc) ? 0 : printf("\nResult: %d\n", (*pfCalc)(atoi(argv[2]), atoi(argv[3])));
    /*ако няма резултат изведи нула, ако има: принтирай %д със съответната функция и с atoi преобразувай стринга в инт */
    return 0;
}
