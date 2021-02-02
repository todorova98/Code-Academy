/*Задача 12 напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция) */
#include <stdio.h>
int any(char s1[], char s2[]);
int main(){
    char s1[]="abcdefgh"; /*'d' е на трета позиция*/
    char s2[]="xyzxyzdxyz";
    printf("Position: %d", any(s1,s2));
    return 0;
}
int any(char s1[], char s2[]){
    for(int i=0; s1[i]!='\0'; i++){
        for(int j=0; s2[j]!='\0'; j++){
            if(s1[i]==s2[j]){
                return i;
            }
        }
    }
}