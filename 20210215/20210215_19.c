/*Задача 19. Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“*/
#include <stdio.h>
int main(){
    char str[]="Baba, kaka, mama";
    char *a=str;
    while(*a){
        if(*a=='a'){
            *a='o';            
        }
        printf("%c",*a);
       a++;
    }
    return 0;
}