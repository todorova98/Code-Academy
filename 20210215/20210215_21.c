/*Задача 21. Напишете функция, която сортира лексикографски масив от
символи (char[]) използвайки qsort. */
#include <stdio.h>
#include <stdlib.h>


int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main () {
   int values[] = {'o','x','t','p','a','c'};
   qsort(values, 6, sizeof(int), cmpfunc);

   printf("\nAfter sorting the list is: \n");
   for( int i = 0 ; i < 6; i++ ) {   
      printf("%c ", values[i]);
   }
  
   return(0);
}