#include <stdio.h>
int main (){
    unsigned int broiKaravani = 3, broiKemperi = 3;
    double cenaKaravana = 90, cenaKemper = 100;
    int rez,sum=0;
    printf("Dobre doshli v Karavani Kempeti pod naem\n");
    printf("Ako zelaete karavana natisnete 1\n");
    printf("Ako zelaete kemper natisnete 2\n");    
    scanf("%d", &rez);
    while(rez!=0){
    if(rez==1){
        sum=sum+cenaKaravana;
        broiKaravani--;
    } else {
        sum=sum+cenaKemper;
        broiKemperi--;
    }
    printf("Iskate li oshte neshto?\n");
    printf("Ako zelaete karavana natisnete 1, v nalichnost %d karavani\n",broiKaravani);
    printf("Ako zelaete kemper natisnete 2, v nalichnost %d kempera\n",broiKemperi);    
    printf("Ako ne zelaete poveche produkti natisnete 0\n");
    printf("Suma do momenta: %d\n",sum);
    scanf("%d", &rez);
    }
    printf("total: %d",sum);

    return 0;
}