/*Задача 14.
Напишете програма, която да обръща всички символи в
текстов файл, с главни букви запишете резултата в друг
временен файл. След това преименувайте новия файл
с името на оригиналния файл и изтрийте временното
име. Отпечатайте съдържанието на файл на
стандартния изход с главни букви.*/
#include <stdio.h>
int main(){
    FILE *fp=NULL;
    fp=fopen("14.txt","rt");
    FILE *fp2=NULL;
    fp2=fopen("14copy.txt","wt");
    char c;
    while ((c=getc(fp))!=EOF)
    {
        if((c>='a'&&c<='z')){
            fputc(c-32,fp2);
            
        } else {
            fputc(c,fp2);
        }
    }
    fclose(fp);
    fclose(fp2);
    fp=NULL;
    fp2=NULL;
    remove("14.txt");
    rename("C:\\Users\\user\\codeAcademy\\20210308\\14copy.txt","C:\\Users\\user\\codeAcademy\\20210308\\14.txt");
    
    
    fp=fopen("14.txt","rt");
    while ((c=getc(fp))!=EOF)
    {
        printf("%c",c);
    }
    fclose(fp);
    return 0;
}