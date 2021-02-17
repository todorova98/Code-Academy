/*14.Решете задачата за генериране на 6 буквена парола с
пойнтери.*/
#include <stdio.h>
#include <stdlib.h>
void passFunc(){
    char *p=alloca(6*sizeof(char));
    while (*p){
        *p=rand()%123;
        if ((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z')){
            printf("%c",*p);
            p++;
        } else continue;
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