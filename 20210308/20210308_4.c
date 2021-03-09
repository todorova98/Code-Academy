/*Задача 4.
Прочетете стринг от създадения файл.
char *fgets(char * str, int nchars, FILE *stream)
 първият параметър е стринг, вторият параметър е брой символи, който
искаме да прочетем, освен ако не стигне терминиращия символ за край
на реда \n или \0 първо, третият е пойнтер към файла;*/
#include <stdio.h>
int main(){
    char s[6];
    FILE *fp=NULL;
    fp=fopen("test1.txt","rt");
    if(fp==NULL){
        printf("Failed to open the file");
        return -1;
    }
    fgets(s, 6, fp);
    printf("%s",s);
    fclose(fp);
    fp=NULL;
    return 0;
}