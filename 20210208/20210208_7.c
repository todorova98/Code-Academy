/*7. Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината.*/
#include <stdio.h>
extern int days[12];
int main(){
    int month,year,date,day=0;
    printf("Enter year: ");
    scanf("%d", &year);
    if( (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0) )
    {
        days[1] = 29;
    }
    printf("Enter month(from 1 to 12): ");
    scanf("%d",&month);
    printf("Enter date: ");
    scanf("%d", &date);
    for(int i=0; i<month-1; i++){
        day+=days[i];
    }
    day+=date;
    printf("%d.%d.%d is the %d day in the year",date,month,year,day);
    return 0;
}
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};