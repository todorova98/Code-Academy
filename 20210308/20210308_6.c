/*Задача 6.
Отворете и прочетете съдържанието от файл с fscanf.
int fscanf(FILE *stream, const char *format,....)
Има същите формати, както scanf.
Първият аргумент е пойнтер към файла, от който ще четем.
Вторият аргумент е формата- Стрингът може да има следните параметриспейс, неспейс, спецификатори;*/
#include <stdio.h>
int main(){
    char *s;
    FILE *fp=NULL;
    fp=fopen("test1.txt","rt");
    fscanf(fp,"%s",s);
    printf("%s",s);
    fclose(fp);
    return 0;
}