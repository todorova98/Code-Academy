/*Задача 16.
Напишете програма, която премахва от файл номер на ред и
премахва този ред от файла. (Hint: Не трийте от оригиналния файл, а
запишете съдържанието на файла без конкретния ред в друг файл).*/
#include <stdio.h>
int main()
{
    FILE *fp = NULL;
    fp = fopen("16.txt", "rt");
    FILE *fp2 = NULL;
    fp2 = fopen("16copy.txt", "wt");
    int r, count = 1;
    char c;
    printf("which row?");
    scanf("%d", &r);
    while ((c = getc(fp)) != EOF)
    {
        if (count != r)
        {
            fputc(c, fp2);
        }
        if (c == '\n'){
            count++;
        }
    }
    fclose(fp);
    fclose(fp2);
    return 0;
}