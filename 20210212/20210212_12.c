/*Задача 12.
Използвайки предишното упражнение, изведете участниците
подредени по азбучен ред.*/
/*Задача 11.
Напишете програма, в която се въвеждат пореден номер,
име, фамилия, възраст на участници в маратон. Изискването
е за името и фамилията да не се използват масиви с
фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците. */
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *id, *age;
    int participants, nameSize=8, surnameSize=8;
    /*задаване на броя участници */
    printf("How many Participants: ");
    scanf("%d",&participants);
    /* заделяне на памет */
    id=(int *)malloc(participants);
    age=(int *)malloc(participants);
    char **name=malloc(participants);
    for(int i=0; i<participants; i++){
        name[i]=malloc(nameSize);
    }
    char **surname=malloc(participants);
    for(int i=0; i<participants; i++){
        surname[i]=malloc(surnameSize);
    }
    /* въвеждане на данните */
    for(int i=0; i<participants; i++){
        printf("ID: ");
        scanf("%d",&id[i]);
        fflush(stdin);
        printf("Name: ");
        for(int j=0; j<=nameSize; j++){
            scanf("%c",&name[i][j]);
            if(name[i][j]=='\n'){
                break;
            }             
        }
        fflush(stdin);
        printf("Enter surname: ");
        for(int j=0; j<=surnameSize; j++){
            scanf("%c",&surname[i][j]);
            if(surname[i][j]=='\n'){
                break;
            } 
            
        }
        fflush(stdin);
        printf("Age: ");
        scanf("%d",&age[i]);
        fflush(stdin);
        
    }
    /*сортиране*/
    char c[10];
    int temp; 
    for(int i=0; i<participants-1; i++){
        for(int j=0; j<participants-i-1; j++)
            if (name[j][0] > name[j+1][0]){
                for(int k=0;k<10;k++){
                c[k]=name[j][k];
                name[j][k]=name[j+1][k];
                name[j+1][k]=c[k];

                c[k]=surname[j][k];
                surname[j][k]=surname[j+1][k];
                surname[j+1][k]=c[k];
            }
            temp=id[j];
            id[j]=id[j+1];
            id[j+1]=temp;

            temp=age[j];
            age[j]=age[j+1];
            age[j+1]=temp;
        }
    }
    
    /*извеждане */
    printf("Participants:\n");
    for(int i=0; i<participants; i++){
        printf("%d\t",id[i]);
        for(int j=0; name[i][j]!='\0'; j++){
            printf("%c",name[i][j]);
        }
        printf("\t");
        for(int j=0; surname[i][j]!='\0'; j++){
            printf("%c",surname[i][j]);
        }
        printf("\t");
        printf("%d\n",age[i]);
        printf("\n");
    }
    free(id);
    free(age);
    for(int i=0; i<nameSize; i++){
        free(name[i]); 
    }
    free(name);
    for(int i=0; i<surnameSize; i++){
        free(surname[i]); 
    }
    free(surname);

    return 0;
}