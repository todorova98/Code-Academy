/*Упражнение 3.* Добавете проверка във функцията int atof(char
*s) дали подаденият стринг няма показни позиции преди числото
и, ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата.*/

#include <stdio.h>
#include <ctype.h>
double atof(char *s);
char *removeLetters(char *s);
int main()
{
    char s[] = "ab c-123.456";
    
    printf("The number in the string is %lf\n", atof(s));
    return 0;
}
double atof(char *s)
{
    s=removeLetters(s);
    double n = 0, d = 0, power = 1.0;
    int i=0;
    if(s[0]='-'){
        i=1;
    }
    for (i ; s[i] != '.'; i++)
    {
        n = n * 10 + (s[i] - '0');
    }
    for (i = i + 1; (s[i] >= '0' && s[i] <= '9') && s[i] != '\0'; i++)
    {
        d = d * 10 + (s[i] - '0');
        power *= 10;
    }
    d = d / power;
    if(s[0]=='-'){
        return -(n+d);
    } 
    return n + d;
}
char *removeLetters(char *s)
{
    
    for (int i = 0,j=0; s[i] != '\0'; i++)
    {
        if (s[i] == '-' || (s[i] >= '0' && s[i] <= '9') || s[i] == '.')
        {
            s[j] = s[i];
            j++;
        }
        if (s[i + 1] == '\0')
        {
            s[j] = '\0';
        }
    }
    return s;
}
