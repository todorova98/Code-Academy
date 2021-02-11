/*8.Решете задачата за генериране на 6 буквена парола с
пойнтери.Задача 4.Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса.
Вариант 1: може да използвате цикли while/for + стрингове
Вариант 2: използвайте функция
Указания:
1. Генерирайте парола
2. Проверете дали потребителя е харесва
3. Повторете докато потребителя си хареса паролата */
#include <stdio.h>
void passFunc(){
    char pass[6]={'.','.','.','.','.','.',};
    char *p=pass;
    while (*p!='\0'){
        *p=rand()%123;
        if ((*p>=65&&*p<=90)||(*p>=97&&*p<=122)){
            printf("%c",*p);
            p++;
    }
}
}
int main(){
    int menu=0;
    while (menu==0)
    {
       printf("This is your new password:\n");
       passFunc();
       printf("\nIf you like it press 1, if you want new password press 0\n");
       scanf("%d",&menu);
    }
    
    return 0;
}

