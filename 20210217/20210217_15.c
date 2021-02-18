/*Задача 15.
Напишете програма аналог на спортния тотализатор.
Използвайте функции.
Насоки:
1. Давате право на избор на играча да избере тотализатор, в който
ще си пробва късмета: (5 от 35), (6 от 42) или (6 от 49)
2. При всяко завъртане програмата изписва 1 произволно число,
което не е извадено до момента.
3. Програмата вади числата, нужни за избраната игра (5 или 6).*/
#include <stdio.h>
void lottery(int n, int m){
    srand((unsigned)time(0));
    int arr[n];
    int a,flag=1;
    int j=0;
    for(int i=0;i<n;i++){
        a=rand()%(m+1);
        for(int j=0;j<n;j++){
            if(arr[j]==a){
                flag=0;
                break;
            }
        }
        if(flag==1){
            arr[i]=a;
            printf("%d ",arr[i]);
        } else {
            i--;
            flag=1;
        }      
        
    }
    
}
int main(){
    int n,m;
    printf("The games are 5/35, 6/42, 6/49\nEnter 5 or 6: ");
    scanf("%d",&n);
    if(n==5){
        m=35;        
    } else {
        printf("6/42 or 6/49? Enter 42 or 49: ");
        scanf("%d",&m);
    }
    printf("The numbers for the game %d/%d are:\n",n,m);
    lottery(n,m);
    return 0;
}