#include <stdio.h>
int main()
{
    char c;
    int brSpace = 0, brTab = 0, brNewLine = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            brNewLine++;
        }
        if (c == ' ')
        {
            brSpace++;
        }
        if (c == '\t')
        {
            brTab++;
        }
    }
    printf("\nSpaces = %d\nTabs = %d\nNew Lines = %d", brSpace, brTab, brNewLine);
    return 0;
}