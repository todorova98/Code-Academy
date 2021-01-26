/* Премахва последната шпация или табулация */
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    char c;
    int i = 0;
    int lenght;
    printf("Enter string:");
    while ((c = getchar()) != '\n')
    {
        s[i] = c;
        lenght = i + 1;
        i++;
    }

    for (int j = 0; j < lenght; j++)
    {
        if ((s[j] == ' ' || s[j] == '\t') && (j == lenght - 1))
        {
            continue;
        }
        putchar(s[j]);
    }

    return 0;
}