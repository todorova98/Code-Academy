/*Задача 1. Да напишем функция char *month_name(int n), която връща указател
към символен низ, съдържащ името на n-тия месец. Да декларираме въртешен static
масив от указатели, сочещ към стрингове съдържащи имената на месеците
static char *name[] = {
"Illegal month",
"January", "February", "March",
"April", "May", "June",
"July", "August", "September",
"October", "November", "December"*/
#include <stdio.h>
char *month_name(int n){
    static char *name[] = {
        "Illegal month",
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };
    if(n>=1 && n<=12){
        return *(name+n);
    } else return *name;
}
int main(){
    int n;
    printf("Which month? ");
    scanf("%d",&n);
    printf("%d month is %s",n,month_name(n));
    return 0;
}
