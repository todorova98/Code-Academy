/*Задача 21. Напишете функция, която сортира лексикографски (по
азбучен ред) масив от символи (char[]). Използвайте “Метода на
мехурчето”, потърсете в интернет.*/
#include <stdio.h>
#include <string.h>
void bubbleSort(char *s){
    int i, j;
    char c;
    for (i = 0; i < strlen(s)-1; i++){
        for (j = 0; j < strlen(s)-i-1; j++){
            if (s[j] > s[j+1]){
                c=s[j];
                s[j]=s[j+1];
                s[j+1]=c;
            }
        }
    }
}
int main(){
    char a[]= "qwerty";
    bubbleSort(a);
    printf("%s",a);
    return 0;
}