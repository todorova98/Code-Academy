/*Задача 3. Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I?*/
#include <stdio.h>
#include <string.h>
int isLetter(char c){ /* функция за проверка дали символът е буква */
    if((c>'a'&&c<'z')||(c>'A'&&c<'Z')){
        return 1;
    } else return 0;
}
void palindrom(char *p, char *s){
    while (p < s){
        if(isLetter(*p)==0){
            p++;
            continue;
        }                           /* проверки ако символът е различен от буква да премине на следващия/предишния */
        if(isLetter(*s)==0){
            s--;
            continue;
        }
        if (*p != *s){
            printf("Not a palindrom\n");
            return;
        }
        p++;
        s--;
    }
    printf("Palindrom!\n");
}
int main()
{
    char s[] = "I did,did I"; /* палиндром */
    char s2[]="I did, did I?"; /* дадено по условие, палиндром */
    char *p1 = &s[0];
    char *p2 = &s[strlen(s) - 1];
    palindrom(p1, p2);
    p1=&s2[0];
    p2=&s2[strlen(s2)-1];
    palindrom(p1, p2);
    return 0;
}