#include <stdio.h>
int main(){
    char c;
    
    int br=0;
    while((c=getchar())!=EOF){
            if(c=='\n'){
            br++;
        }
    }
    printf("\nNew lines = %d",br);
    return 0;
}