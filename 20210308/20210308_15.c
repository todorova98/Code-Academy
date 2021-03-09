/*Задача 15.
Напишете програма, която печата съдържанието на файл в обратен
ред.
Използвайте fseek функцията, за да отидете накрая на файла.
Използвайте ftell функцията, за да намерите позицията на пойнтера.
Покажете на екран файла, обърнат в обратен ред.*/
#include <stdio.h>
int main(){
    int pos;
    FILE *fp=NULL;
    fp=fopen("15.txt","rt");
    fseek(fp,0,SEEK_END);
    pos=ftell(fp);
    for(int i=0; i<=pos; i++){
        fseek(fp,-i,SEEK_END);
        printf("%c",fgetc(fp));
    }
    fclose(fp);
    return 0;
}