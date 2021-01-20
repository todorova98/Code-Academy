#include <stdio.h>
int main(){
    char c;
    int i, br, total = 0;
    br = 0;
    while((c=getchar())!='\n'){ //слагам край на цикъла, когато се натисне Enter
        total++;
        if(c<'0' || c>'9') continue;
        br++;
    }
    printf("Symbols total is %d \n", total);
    printf("Number of digits is %d\n", br);
    return 0;
}