/*адача 7.
Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана.*/
#include <stdio.h>
#include <string.h>
union tagMyData{
    int m_nValue;
    float m_fValue;
    char m_szText[16];
};
int main()
{
    union tagMyData data;
    data.m_nValue=15;
    printf("nValue: %d\n", data.m_nValue);
    data.m_fValue=5.4;
    printf("fValue: %f\n", data.m_fValue);
    strcpy(data.m_szText,"STRING");
    printf("string: %s\n", data.m_szText);
    return 0;
}