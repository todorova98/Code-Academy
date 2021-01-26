/* Вариант 2 - обръщане на редовете и символите */
#include <stdio.h> 
#include <string.h> 
  
void reverse(char s[]) 
{ 
    int lenght = strlen(s);
    for(int i= lenght-1; i>=0; i--){
        if(s[i]=='\n' ){
            
            for(int j=lenght;j>=i+1;j--){
                printf("%c",s[j]);                
            }
            printf("\n");
            lenght=i-1;
        }
        if(i==0){
            for(int j=lenght;j>=i;j--){
                printf("%c",s[j]);                
            }
        }
    }
} 
int main() 
{ 
    char t[1000];
    int i=0;
    char c;
     while ((c = getchar()) != 33) // 33 по ASCII таблицата е удивителен знак(!) използвам го защото EOF не ми работи
    {
        t[i] = c;
        i++;
    }
    printf("Reversed:\n");
    reverse(t); 
    return 0; 
} 
