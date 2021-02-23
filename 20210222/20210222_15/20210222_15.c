/*Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат (
https://en.wikipedia.org/wiki/Comma-separated_values ). Пример:
prog1 > structs20.cvs*/
/* C:\Users\user\codeAcademy\20210222> gcc -o makecvs 20210222_15.c        
   C:\Users\user\codeAcademy\20210222> ./makecvs 4 5 > 20210222_15.csv*/
#include <stdio.h>
#include <string.h>
enum bool{
    false,
    true
};
struct testStruct{
    int iVal;
    char str[10];
    double dVal;
    enum bool enVal;
};
int main(){
    struct testStruct array[20];
    for(int i=0; i<20; i++){
        array[i].iVal=i+1;
        array[i].dVal=(double)i+1.5;
        strcpy(array[i].str,"string");
        if(i%2==0){
            array[i].enVal=true;
        } else {
            array[i].enVal=false;
        }
        printf("%d,%s,%lf,%d\n",array[i].iVal,array[i].str,array[i].dVal,array[i].enVal);
    }

    return 0;
}
/*C:\Users\user\codeAcademy\20210222> .\makecvs.exe
1,string,1.500000,1
2,string,2.500000,0
3,string,3.500000,1
4,string,4.500000,0
5,string,5.500000,1
6,string,6.500000,0
7,string,7.500000,1
8,string,8.500000,0
9,string,9.500000,1
10,string,10.500000,0
11,string,11.500000,1
12,string,12.500000,0
13,string,13.500000,1
14,string,14.500000,0
15,string,15.500000,1
16,string,16.500000,0
17,string,17.500000,1
18,string,18.500000,0
19,string,19.500000,1
20,string,20.500000,0*/
