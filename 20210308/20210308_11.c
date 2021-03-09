/*Задача 11.
Направете същото ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);
Първият параметър е указател към файла, вторият параметър е
указател към стандартен параметър дефиниран в stdio.h
Типа fpos_t може да запише всяка позиция във файла.
Функцията връща 0 при успех и различно от 0 при грешка.
Дефинирайте променлива за fpos_t.*/
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
    fpos_t pos;
    fgetpos(fp,&pos);
    printf("%d",pos);
    fclose(fp);
    return 0;
}