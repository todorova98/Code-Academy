#include <stdio.h>
int main()
{
    char c;
    while ((c = getchar()) != '?')
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            putchar(c);
        }
    }
    return 0;
}