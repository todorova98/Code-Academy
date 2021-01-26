#include <stdio.h>
#include <string.h>
void reverse(char s[])
{
    int lenght = strlen(s);
    char c;
    char str[lenght];
    int i, j;
    for (i = 0, j = lenght-1; i<lenght, j>=0 ; i++, j--)
    {
        str[i]=s[j];
    }

    printf("%s\n", str);
}
int main()
{
    char s[100];
    char c;
    int i = 0;
    printf("Enter string:");
    while ((c = getchar()) != '\n')
    {
        s[i] = c;
        i++;
    }
    printf("Reversed: ");
    reverse(s);

    return 0;
}