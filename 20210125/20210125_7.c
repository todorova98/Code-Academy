#include <stdio.h>
int main(void)
{
    char c;
    int br = 0;
    char str[1000];
    while ((c = getchar()) != EOF)
    {
        
        str[br]=c;
        br++;
        if (br <= 80 && c == '\n')
        {
            br = 0;
        }
        if (br > 80 && c == '\n')
        {
            printf("%s",str);
            br = 0;
        }
    }
    return 0;
}