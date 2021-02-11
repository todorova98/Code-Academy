/*Задача 7. Разгледайте и имплементирайте quicksort алгоритъма.*/
#include <stdio.h>
#include <stdlib.h>

void quicksort(int *array, int length);
void swap(int *a, int *b);
void print(int *array, int length);

int main()
{
    int input_array[] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
    int *array_ptr = &input_array[0];
    int LENGTH = 10;

    print(array_ptr, LENGTH);

    quicksort(array_ptr, LENGTH);

    print(array_ptr, LENGTH);

    return 0;
}

void quicksort(int *array, int length)
{
    int partition; // value of the partition element
    int i, j; // iterators 
    int r_len, l_len; // length of two arrays resulting from partition
    int *r_array, *l_array; // new pointers to arrays resulting from partition

    if (length < 2)
    {
        return; // terminate - you're done
    } 

    partition = *(array); //value of the partition element (here just taking first elem as partition)
    i = 1; // initialize to 1 because array[0] is the partition element

    for (int j=1; j<=length; j++) // initialize to 1 because array[0] is the partition element
    {
        printf("In loop! i = %d, j = %d\n", i, j);
        print(array, length);
        if (*(array + j) < partition)
        {
            swap((array + i), (array + j));
            i++;
        }
    }

    swap(array, (array + i -1)); // places partition into correct spot

    printf("Swapped partition element\n");
    print(array, length);

    l_len = i - 1; //omit i - parition is already in right spot
    l_array = array;
    r_array = (array + i); // because array is already a pointer, this is just pointer arithmetic ... maybe
    r_len = length - i;

    printf("Right array:   ");
    print(r_array, r_len);
    printf("Left array:    ");
    print(l_array, l_len);

    quicksort(r_array, r_len);
    quicksort(l_array, l_len);

}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b; 
    *b = temp; 
}

void print(int *array, int length)
{
    int i;
    for (i=0; i<length; i++)
    {
        printf("%d\t", *(array+i));
    }
    printf("\n");


}