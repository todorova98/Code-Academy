#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Задача 9. Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s*/

void myStrncpy(char *s, char *t, unsigned int n)
{
    char* ptr = s;
    while (*t && n--)
    {
        *s = *t;
        s++;
        t++;
    }
    *s = '\0';
    return;
}

int main(int argc, char* argv[]) /* argv[1] - str to be copied, argv[2] - symbols to be copied*/
{
	int symbols = atoi(argv[2]);	
    char *new = (char*)malloc(sizeof(char) * symbols);
    if (new == NULL){
    	exit(1);
    }
    myStrncpy(new, argv[1], symbols);
    printf("%s", new);    
    free(new);
    return 0;
}
