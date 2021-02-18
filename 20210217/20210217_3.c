/*Задача.3. Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от
горните функции иска да използва – събиране, изваждане,
умножение и деление. След това попитайте за числата, които
да участват в тази операция, и извикайте функцията, която да
извърши желаната операция.*/
#include <stdio.h>
int fnPlus(int nA, int nB) { return (nA + nB); } /* функции */
int fnMinus(int nA, int nB) { return (nA - nB); } 
int fnMultiply(int nA, int nB) { return (nA*nB); }
int fnDivide(int nA, int nB) { return (nA / nB); }
int main(){
    int (*funcPointer[4])(int,int) = {fnPlus, fnMinus, fnMultiply, fnDivide};
    char operation[4]={'+','-','*','/'};
    char c;
    printf("What aritmetic operation: +,-,* or /\n");
    scanf("%c",&c);
    int a,b,rez;
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    for(int i=0; i<4; i++){
        if(c==operation[i]){
            rez=(*funcPointer[i])(a,b);
        }
    }
    printf("RESULT: %d",rez);
    return 0;
}
