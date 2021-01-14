#include <stdio.h>

void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 )   // до 7 бита
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}

int main(){
    char a = 255;
    bin(a);
    char b = 10;
    bin(b);
    char res=a+b;
    bin(res);
    printf("%d\n",res);
    return 0;
}