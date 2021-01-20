#include <stdio.h>
int main(){
    unsigned int i=0;
    for(;;){
        sleep(1);
        printf("%d\n",i);
        i++;
        if(i==48) break;
    }
    return 0;
}