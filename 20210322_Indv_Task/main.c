#include "genomh.h"
extern unsigned int N;
extern char **genom;
int main(){
    FILE *fin=NULL;
    FILE *fout=NULL;
    int *out=(int *)malloc(N*sizeof(int));
    fin=fopen("GENOM.INP","wt");    
    if(!fin){
        perror("Error opening the file!");
        return 1;
    }
    fout=fopen("GENOM.OUT","wt");
    if(!fout){
        perror("Error opening the file!");
        return 1;
    }

    N=pieces();
    fprintf(fin,"%d\n",N);    
    allocateMemory();
    inputData(fin);   

    for(int i=0; i<N;i++){
        out[i]=0;
    }
    char s[MAXSIZE];
    int pos=1;
    int a=0;
    for(int i=0;i<N;i++){
        int j=i+1;
        while(j<N){
            strcpy(s,genom[j]);
            reverse(s);
            if((strcmp(genom[i],genom[j]))==0 && out[i]==0){
                out[i]=pos;
                out[j]=(N+1-pos);
                pos++;
            }else if((strcmp(genom[i],s))==0 && out[i]==0){
                out[i]=pos;
                out[j]=(-1)*(N+1-pos);
                pos++;
            }
            j++; 
        }
        if(out[i]==0){
            out[i]=pos;
            pos++;
        }
        
    }
    for(int i=0; i<N;i++){
        fprintf(fout,"%d\n",out[i]);
    }
    free(out);
    freeMemory();
    fclose(fin);
    fclose(fout);
    return 0;
}