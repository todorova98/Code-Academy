#include "genomh.h"

void allocateMemory(){ /*ф-ция за заделяне на памет за genom и неговите елементи*/
    
    genom=malloc(N*sizeof(char*));
    for(int i=0;i<N;i++){
        genom[i]=malloc(MAXSIZE*sizeof(char));
    }
}

void inputData(FILE *fp){ /*ф-ция за въвеждане на низовете от клавиатурата и записването им във файла */
    char s[MAXSIZE];
    for(int i=0;i<N;i++){
        scanf("%s",&s);
        strcpy(genom[i],s);
        fprintf(fp,"%s\n",genom[i]);
    }
}

void reverse(char *s){ /*ф-ция за обръщане на низ*/
    char c;
    for (int i = 0, j = strlen(s) -1; i < j; i++, j--){
        c = *(s+i);
        *(s+i) = *(s+j);
        *(s+j) = c;
    }
}

int pieces(){ /*ф-ция за въвеждане на броят на парчетата с проверка на условието*/
    printf("How many pieces?\n");
    scanf("%d",&N);
    if(N<5 || N>1000){
        printf("Enter number between 5 and 1000, including");
        scanf("%d",&N);
    }
    return N;
}

void freeMemory(){ /*ф-ция за освобождаване на паметта за елементите на genom и за genom*/

    for(int i=0;i<N;i++){
        free(genom[i]);
    }
    free(genom);
}