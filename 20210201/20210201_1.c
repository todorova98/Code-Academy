#include <stdio.h>
/*Напишете функция, която принтира низ, пойнтера към
началото му е подаден като аргумент на функцията void printstr(char *s); Не
забравяйте, низът винаги завършва с знак за терминираща нула '\0', затова
проверката в цикъла, който принтира всеки чаръктър, трябва да е докато не
се стигне този знак.*/
void printstr(char *s);
int main(){
    char s[]="Hello.\nThis is the first task.";
    printstr(s);
    return 0;
}
void printstr(char *s){
     for(int i=0;s[i]!='\0';i++){
         printf("%c",s[i]);
     }
 }
