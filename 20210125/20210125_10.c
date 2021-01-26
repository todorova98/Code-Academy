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
    char t[]="Hello\nI'm\nTanya\nThis\nis\nmy\nhomework";
    printf("%s\n",t);
    printf("Reversed:\n");
    reverse(t); 
    return 0; 
} 