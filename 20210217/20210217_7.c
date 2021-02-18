/*Задача 7.
Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква. */
#include <stdio.h>
int main(){
    int alphabet[26]={0};
    char c;
    char str[]="C is a general-purpose, procedural computer programming language supporting structured programming, lexical variable scope, and recursion, with a static type system. By design, C provides constructs that map efficiently to typical machine instructions.";
    for(int i=0; str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){ /*брои малки букви */
            c=str[i];
            alphabet[c-97]++;
        }
        if(str[i]>='A' && str[i]<='Z'){ /*брои и главни, но инкрементира същата стойност в масива */
            c=str[i];
            alphabet[c-65]++;
        }
    }
    c='a';
    for(int i=0; i<26; i++,c++){
        printf("%c : %d times\n", c, alphabet[i]);
    }

    return 0;
}