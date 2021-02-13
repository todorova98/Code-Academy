/*Задача 6.
Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int size=2;
    char *array=NULL;
    array=malloc(size);
    if (NULL==array)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    for(int i=0; i<size; i++){
        scanf("%c",&array[i]); /* с getchar не става */
        if(i==size-1){              /* когато стигне до последния елемент */
            array=realloc(array,2); /* размерът се увеличава с 2 */
            printf("Symbols before the next Realloc %d\n",size); /*добавих този printf за да видя дали наистина всичко работи*/
            if (!array)
                {
                    printf("Reallocation memory error!\n");
                    exit(2);
                }
            size=size+2; /*увеличавам size също с 2 */
        }
        if(array[i]=='\n'){ /*използвам тази проверка за край защото EOF не работи */
            break;
        }
    }
    
    for(int i=0; array[i]!='\0'; i++){
        printf("%c",array[i]);
    }
    free(array);
    return 0;
}