#include <stdio.h>
#include <math.h>



int main(){
    int N; //num participantes
    int menor, maior, acima=0, reprov=0;
    int i;
    float soma, media, desvio;
    scanf("%d", &N);
    int notas[N];

    if(N>0){
        for(i=0; i<N; i++){
            scanf("%d", &notas[i]);
            soma+=notas[i];
            if(i==0){
                maior=notas[i];
                menor=notas[i];
            }
            if(notas[i]>maior){
                maior=notas[i];
            }
            if(notas[i]<menor){
                menor=notas[i];
            }
        }
        
        media = soma/N;

        for(i=0; i<N; i++){
            if(notas[i]>media){
                acima++;
            }
            if(notas[i]<70){
                reprov++;
            }
            desvio+=pow(notas[i]-media,2);
        }

        desvio=sqrt(desvio/N);

        printf("MENOR:%d, MAIOR:%d, MEDIA:%.2f, STD:%.2f, ACIMA_MEDIA_CONC:%d, REPROV:%d", menor, maior, media, desvio, acima, reprov);
    }
    return 0;
}