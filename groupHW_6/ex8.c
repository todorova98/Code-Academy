#include <stdio.h>
#include <stdlib.h>

/*Задача 8.
Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1. */

int *fibSerries(int *pFib, int size)
{
    int i;
    *(pFib + 0) = 0;
    *(pFib + 1) = 1;
    for (i = 2; i < size; i++)
    {
        *(pFib + i) = *(pFib + i - 1) + *(pFib + i - 2);
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(pFib + i));
    }
    return pFib;
}

int main(int argc, char* argv[])
{
	int arrSize = atoi(argv[1]);
	int *arr = (int *)malloc(sizeof(int) * arrSize);
    if (arr == NULL){
    	exit(1);
    }
    int *ptr;
    ptr = fibSerries(arr, arrSize);
    free(arr);
    return 0;
}
