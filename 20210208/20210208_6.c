/*6. Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях.*/
#include <stdio.h>
int max(int *a){
    int max=*a;
    while (*a){
        if(*a>max){
            max=*a;
        }
        *a++;
    }
    return max;

}
int main(){
    int n;
    printf("How many elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n", n);
     for(int i=0; i<n; i++){
        printf("arr [%d]: ",i);
        scanf("%d",&arr[i]);
    }
    int *a=arr;
    printf("The biggest element in the array is %d",max(a));
    return 0;
}