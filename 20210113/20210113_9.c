//4.9876543, 7.123456789012345678890, 18 398 458 438 583 853.28, 18 398 458 438 583 853.39875937284928422.
#include <stdio.h>
int main (){
    double x1 = 4.9876543;
    long double x2 = 7.123456789012345678890;
    long double x3 = 18398458438583853.28;
    long double x4 = 18398458438583853.39875937284928422;
    printf("%f\n",x1);
    __mingw_printf("%1.21Lf\n",x2);
    __mingw_printf("%17.2Lf\n",x3);
    __mingw_printf("%17.16Lf\n",x4);
    return 0;
}