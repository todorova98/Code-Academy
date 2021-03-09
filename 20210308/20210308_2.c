/*Задача 2.
Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница- име, поздрав, брой. Отворете
файла за редактиране. Внимавайте за мястото, къде поставяте
файла. Трябва да е там, където е сорс файлът.*/
#include <stdio.h>
int main(){
    
    FILE *pfile = NULL;
    char *filename = "myfile.txt";
    pfile = fopen(filename, "wt");
    if(pfile==NULL){
        printf("Failed to open %s.\n",filename);
    }
    fclose(pfile);
    pfile = NULL;
    rename("myfile.txt","new_name.txt");
    //remove ("new_name.txt");
    /*remove("myfile.txt");*/
    return 0;
}