/*Задача 10.
Намерете позицията си във файла.
long ftell(FILE *pfile);
Функцията приема указател към файла като параметър и връща long
int, който отговаря на позицията във файла.
Дефинирате променлива
long fpos = ftell(pfile)
Променливата съхранява текущата ви позицията в байтове от
началото на файла и вие можете да се върнете на нея по всяко
време.*/
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
    long fpos=ftell(fp);
    printf("%ld",fpos);
    fclose(fp);
    return 0;
}