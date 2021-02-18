/*Задача 14.
Напишете програма, която да проверява дали 2 стринга (масива) са
анаграми и имат всичките букви на другата дума. Използвайте функции.
Примери за анаграми: реклама: карамел; босилек: обелиск.*/
#include <stdio.h>
#include <string.h>
int anagram(char s[], char t[]){
    int alphabetS[26] ={0};
    int alphabetT[26] ={0};
    if (strlen(s)==strlen(t))
    {
        for(int i=0; i<strlen(s);i++){
           
            alphabetS[s[i]-97]++;
        }
        for(int i=0; i<strlen(t);i++){
           
            alphabetT[t[i]-97]++;
        }
        for(int i=0; i<26; i++){
            if(alphabetS[i]!=alphabetT[i]){
                return 0;
            }
        }
        return 1;

    } else{
        return 0;
    }
    
}
int main(){
    char s[]="karamel";
    char t[]="reklama";
    char m[]="bosilek";
    char n[]="obelisk";
    printf("%d\n",anagram(s,t));
    printf("%d\n",anagram(m,n));
    return 0;
}