/*Задача 12.
Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции.
Насоки:
1. Въвежда се дължина на паролата, колко символа от нея са малки
букви (a..z), големи букви( A..Z ), колко са цифрите (0..9), колко
специални символи (@#$%!^&*).
2. Използва се генератор на случайни числа за символите и тяхната
позиция*/
#include <stdio.h>
#include <stdlib.h>
void pass(int length, int i, int j, int k, int l){
    srand((unsigned)time(0));
    int position=0;
    int s;
    char c;
    while( position<length){
        s=rand()%4;
        switch (s)
        {
        case 0:{
            c=rand()%65;
            if (((c>='!'&&c<='/')||(c>=':'&&c<='@'))&& j>0){
            printf("%c",c);
            position++;
            j--;
        } else continue;
            break;
        }
        case 1:{
            c=rand()%123;
            if ((c>='a'&&c<='b')&& i>0){
            printf("%c",c);
            position++;
            i--;
        } else continue;
            break;
        }
        case 2:{
            c=rand()%91;
            if ((c>='A'&&c<='Z')&& k>0){
            printf("%c",c);
            position++;
            k--;
        } else continue;
            break;
        }
        case 3:{
            c=rand()%58;
            if ((c>='0'&&c<='9')&& l>0){
            printf("%c",c);
            position++;
            l--;
        } else continue;
            break;
        }
        default:
            break;
        }
    }
}
int main(){
    int smallLetters, bigLetters, symbols, numbers, length;
    printf("How long will be the password: ");
    scanf("%d",&length);
    printf("How many small letters ");
    scanf("%d",&smallLetters);
    printf("How many big letters: ");
    scanf("%d",&bigLetters);
    printf("How many special characters: ");
    scanf("%d",&symbols);
    printf("How many numbers: ");
    scanf("%d",&numbers);
    pass(length, smallLetters, symbols, bigLetters, numbers);
    return 0;
}