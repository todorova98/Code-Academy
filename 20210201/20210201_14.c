/*Задача 14*. Напишете функция int getline(char s[],int lim), която чете ред в
s[] и връща дължината му*/
#include <stdio.h>
#include <string.h>
int getline(char s[], int lim);
int main()
{
    char s[] = "Line1\nLine2.\nLine3..\nLine4..."; // L1-5, L2-6, L3-7, L4-8
    int n;
    n = getline(s, 3);
    printf("%d", n);
    return 0;
}
int getline(char s[], int lim)
{
    int lenght = 0, br = 1, symbols = 0;
    if(lim==1){
         for (int i = 0; s[i]!='\n'; i++){
             lenght++;
         }
         return lenght;
    }
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '\n')
        {
            br++;
        }

        if (lim==br)
        {
           for (int j = i+1; s[j]!='\n'; j++){
             lenght++;
         }
         return lenght;
        }
    }
    
}