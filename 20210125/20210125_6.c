#include <stdio.h>
int main()
{
    int c;
    int letters = 0, numbers = 0;

    while ((c = getchar()) != EOF)
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            letters++;
        }
        if (c >= '0' && c <= '9')
        {
            numbers++;
        }
    }
    printf("\nLetters = %d", letters);
    printf("\nNumbers = %d", numbers);
    return 0;
}