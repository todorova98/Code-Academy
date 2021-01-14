#include <stdio.h>
int main(){
    float priceTomato = 4.8;
    float priceFlour = 1.8;
    float priceYoughurt = 0.5; 
    float priceIceCream = 0.6;
    float priceCandy = 1.5;
    float priceLolipop = 0.15;
    float weightTomato;
    float weightFlour;
    unsigned int countYoughurt; 
    unsigned int countIceCream;
    float weightCandy;
    unsigned int countLolipop;

    printf("Zdraveite, dobre doshli v nashiq magazin! Dnes predlagame domati, brashno, kiselo mlqko, sladoled, bonboni i blizalki!\n");
    printf("Kolko kg domati shte jelaete? ");
    scanf("%f",&weightTomato);
    float totalTomato = priceTomato*weightTomato;
    printf("Smetkata vi e %f za %f kg domati!",totalTomato, weightTomato);
    return 0;
}