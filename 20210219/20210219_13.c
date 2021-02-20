/*Задача 13. Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият
началник*/
#include <stdio.h>
#include <string.h>
struct worker{
    int id;
    char name[10];
    char middleName[10];
    char lastName[10];
    char job[10];
    int years;
    double salary;
    struct worker *boss;
};
int main(){
    struct worker company[10];
    for(int i=0; i<10; i++){
        printf("Enter the worker's id: ");
        scanf("%d",&company[i].id);
        printf("Enter the worker's name: ");
        scanf("%s",company[i].name);
        printf("Enter the worker's middle name: ");
        scanf("%s",company[i].middleName);
        printf("Enter the worker's last name: ");
        scanf("%s",company[i].lastName);
        printf("Enter the worker's years in the company: ");
        scanf("%d",&company[i].years);
        printf("Enter the worker's salary: ");
        scanf("%lf",&company[i].salary);
    }
    int choice=0;
    for(int i=0;i<10;i++){
        printf("Enter boss's id for worker %s %s",company[i].name,company[i].lastName);
        scanf("%d",&choice);
        for(int j=0; j<10; j++){
            if(choice!=0 && choice==company[j].id){
                company[i].boss=&company[j];
            }
        }
    }
    
    for(int i=0; i<10; i++){
        printf("Worker No.%d %s %s %s %d %lf BOSS: %s %s \n",company[i].id,company[i].name,
        company[i].middleName,company[i].lastName,company[i].years,company[i].salary,
        company[i].boss->name,company[i].boss->lastName);
    }
    
}