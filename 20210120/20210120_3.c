#include <stdio.h>
int main(){
    int m=0;
    while(m!=4){
        printf("Press 1 to see message Hello \nPress 2 to see Poem \nPress 3 to see hidden message\nPress 4 for Exit\n");
        scanf("%d",&m);
        switch (m){
            case 1: 
                printf("hello world\n");
                break;
                
            case 2: 
                printf("Mary had a little lamb,\nIts fleece was white as snow;\nAnd everywhere that Mary went\nThe lamb wass ure to go.\n");
                break;
                
            case 3: 
                printf("48\n");
                break;
                
            default :
                printf("Press 1, 2, 3 or 4\n");
                break;
            
        }
        }
    return 0;
}