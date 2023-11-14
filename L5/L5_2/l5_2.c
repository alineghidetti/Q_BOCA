#include <stdio.h>
#define MAX 100

void ordemNotas(int qtd, int notas[qtd]){
    int x, des=0, cre=0;
    for(x=0; x<qtd; x++){
        if(x!=0){
            if(notas[x]>notas[x-1]){
                cre++;
            }
            else if(notas[x]<notas[x-1]){
                des++;
            }
        }
    }
    if(cre==0 && des==0)
    printf("CRESCENTE&DECRESCENTE");
    else if(cre!=0 && des!=0)
    printf("DESORDENADO");
    else if(cre!=0)
    printf("CRESCENTE");
    else
    printf("DECRESCENTE");
}

int main(){
    int N;
    scanf("%d", &N);
    int i, notas[N];

    if(N>0){
        for(i=0; i<N; i++){
            scanf("%d", &notas[i]);
        }
    }
    ordemNotas(N, notas);

    return 0;
}