/*Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[].*/
#include <stdio.h>
#include<string.h>
void reverse(char s[]);
void itob(int n, char *s, int b);
int main(){
    int n,b;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Enter base(2,8,10 or 16): ");
    scanf("%d", &b);
    char s[10];
    itob(n,s,b);
    return 0;
}
void reverse(char *s){
    char c;
    for (int i = 0, j = strlen(s) -1; i < j; i++, j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
void itob(int n, char *s, int b){
    int i=0,m;
    
    do
    {
       m=n%b;
       if(m>9){
           s[i]= m +'a'-10;
       } else{
       s[i]=n%b + '0';
       }
       n=n/b;
       i++;
       if(n==0){
           s[i]='\0';
       }
    } while (n!=0);
    reverse(s);
    printf("%s\n",s);
    
}