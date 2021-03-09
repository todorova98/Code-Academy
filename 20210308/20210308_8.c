/*Напишете стринг в текстов файл.
int fputs (const char *str, FILE *pfile);
Първият параметър е указател към стринга, който искаме да
запишем, вторият параметър е указател към файла, в който ще
пишем.
Функцията ще записва символи от стринга догато достигне
терминиращ символ \0, но не го пише в новия файл.*/
#include <stdio.h>
int main(){
    FILE *fp=NULL;
    fp=fopen("test2.txt","wt");
    if(fp==NULL){
        printf("Failed to open the file");
        return -1;
    }
    fputs("String1\n",fp);
    fputs("String2",fp);
    fclose(fp);

    return 0;
}