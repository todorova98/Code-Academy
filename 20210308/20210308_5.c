/*Задача 5
Напишете програма, която чете числа от един текстов файл и ги записва
в друг текстов файл*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    FILE *fp1=NULL;
    FILE *fp2=NULL;
    fp1=fopen("file1.txt","wt");    
    fputs("1,2,3,4,5\n",fp1);
    fclose(fp1);
    fp1=fopen("file1.txt","rt");
    fp2=fopen("file2.txt","wt");
    char c;
    while((c=getc(fp1))!=EOF){
        if(c>'0'&&c<'9'){
            fputc(c,fp2);
            fputc('\n',fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}