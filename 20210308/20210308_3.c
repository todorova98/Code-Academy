/*Задача 3.
Създайте test1.txt файл в избрана от вас директория. Сложете някакви
данни в него на латиница - име, поздрав, брой. Отворете за четене.
Използвайте fgetc() , която взема само един char от файла. Направете
while цикъл, за да изпишете всички символи, проверявайте за край на
файл с EOF. Проверявайте дали файловият пойнтер не е NULL, ако е
NULL, изпишете грешка.*/
#include <stdio.h>
int main(){
    FILE *file = NULL;
    char *filename = "test1.txt";
    file = fopen(filename, "rt");
    if(file==NULL){
        printf("Failed to open %s.\n",filename);
        return (-1);
    }
    char c;
    while((c=fgetc(file))!=EOF){
        printf("%c",c);
    }
    fclose(file);

    return 0;
}