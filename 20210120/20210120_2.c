#include <stdio.h>
int main(){
    printf("Press 1 to see message Hello \nPress 2 to see Poem \nPress 3 to see hidden message\n");
    int m=0;
    scanf("%d",&m);
    switch (m){
        case 1: 
            printf("hello world");
            break;
            
        case 2: 
            printf("Mary had a little lamb,\nIts fleece was white as snow;\nAnd everywhere that Mary went\nThe lamb wass ure to go.\n");
            break;
            
        case 3: 
            printf("48");
            break;
            
    }
    return 0;
}