/*Задача 8. Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.*/
#include <stdio.h>
#include <string.h>
void reverse(char *s){
    char c;
    for (int i = 0, j = strlen(s) -1; i < j; i++, j--){
        c = *(s+i);
        *(s+i) = *(s+j);
        *(s+j) = c;
    }
}
int atoi(char *s){
    int n = 0;
    int i;
    for (i = 0; (*(s+i) >= '0' && *(s+i) <= '9') && *(s+i) != '\0'; i++)
    {
        n = n * 10 + (*(s+i) - '0');
    }
    return n;
}
void itoa(int n, char *s){
    int i=0;
    do
    {
       *(s+i)=n%10 + '0';
       n=n/10;
       i++;
    } while (n!=0);
    reverse(s);
    printf("String: %s\n",s); 
}
double atof(char *s)
{
    double n = 0, d = 0, power = 1.0;
    int i;
    for (i = 0; (*(s+i) >= '0' && *(s+i) <= '9') && *(s+i) != '.'; i++)
    {
        n = n * 10 + (*(s+i) - '0');
    }
    for (i = i + 1; (*(s+i) >= '0' && *(s+i) <= '9') && *(s+i) != '\0'; i++)
    {
        d = d * 10 + (*(s+i) - '0');
        power *= 10;
    }
    d=d/power;
    return n+d;
}
int main(){
    char *strInt="256";
    printf("atoi: %d\n",atoi(strInt));
    printf("itoa with 123456:\n");
    char *itoaStr;
    itoa(123456,itoaStr);
    reverse(itoaStr);
    printf("The same string reversed: %s\n",itoaStr);
    char *atofStr="142.97";
    printf("atof: %f\n",atof(atofStr));
    return 0;
}
