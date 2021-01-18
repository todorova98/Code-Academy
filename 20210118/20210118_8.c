#include <stdio.h>
int isLetter(char c);

int main(){
    char c;
    printf("character: ");
    c=getchar();
    int flag;
    flag = isLetter(c);
    if(flag==1){
        printf("Letter");
    } else{
        printf("Number or character");
    }
    return 0;
}

int isLetter(char c){
    int result;
    if ((c>64 && c<91) || (c>97 && c<122)){ // десетичните стойности на буквите в ASCII таблицата
        result = 1;
    } else{
        result =0;
    }
    return result;

}