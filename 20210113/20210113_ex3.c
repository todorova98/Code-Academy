#include <stdio.h>

void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 )   // до 7 бита
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}

int main(){
    signed char a = -10;
    bin(a);
    printf("%d\n",a);
    unsigned char z = 0;
    bin(z);
    printf("%d\n",z);
    z=z+a;
    bin(z);
    printf("%d\n",z);
    return 0;
}