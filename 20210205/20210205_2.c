#include <stdio.h>
#include <string.h>
/* Задача 2.Напишете функцията size_t my_strlen(char *s), която връща
дължината на стринга подаден в нея. Итерирайте по масива докато стигнете
знака за край на стринг '\0'. Увеличавайте в една променлива от тип size_t
стойността и за всяка итерация.size_t обикновено е unsignet long int като
размер. Върнете променливата като резултат от функцията.*/
size_t my_strlen(char *s){
    size_t br=0;
    while (s[br]!='\0')
    {
        br++;
    }
    return br;
}
int main(){
    char s[]="Hello!";
    printf("strlen(s): %d\n", strlen(s));
    printf("my_strlen(s): %d\n",my_strlen(s));
    return 0;
}