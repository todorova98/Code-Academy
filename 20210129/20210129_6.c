/*Напишете програма на С, която чрез функция да обръща
десетични числа в двоични. */
#include <stdio.h>
void toBinary(int n);
int main(){
    int x;
    printf("Enter the decimal number: ");
    scanf("%d",&x);
    toBinary(x);
    return 0;
}
void toBinary(int n){
    int b[10],i=0;
    while(n!=0){
        b[i]=n%2;
        n=n/2;
        i++;
    }
    for(i=i-1; i>=0;i--){
        printf("%d",b[i]);
    }
}
