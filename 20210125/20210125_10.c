/*В този вариант, кодът извежда въведените редове като започва от последния, без да обръща символите в тях*/
/* 20210125_10_2.c е другият вариант*/
#include <stdio.h> 
#include <string.h> 
  
void reverse(char s[]) 
{ 
    int lenght = strlen(s);
    for(int i= lenght-1; i>=0; i--){
        if(s[i]=='\n' ){
            
            for(int j=i+1;j<=lenght;j++){
                printf("%c",s[j]);                
            }
            printf("\n");
            lenght=i-1;
        }
        if(i==0){
            for(int j=i;j<=lenght;j++){
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
     while ((c = getchar()) != 33) // 33 по ASCII таблицата е удивителен знак(!) използвам го защото EOF не ми работи в тази задача
    {
        t[i] = c;
        i++;
    }
    printf("Reversed:\n");
    reverse(t); 
    return 0; 
} 
