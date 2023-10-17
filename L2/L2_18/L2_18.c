#include <stdio.h>
int main(){
    int linhas, colunas, valor, i=0, k=0, maior=0, lMaior, cMaior;
    scanf("%d %d", &linhas, &colunas);
    if(linhas>=1 && linhas<=100 && colunas>=1 && colunas<=100){
        while(i<linhas){
            k=0;
            while(k<colunas){
                scanf("%d", &valor);
                if(maior==0){
                    maior=valor;
                    lMaior=i;
                    cMaior=k;
                }
                if (valor>maior){
                    maior=valor;
                    lMaior=i;
                    cMaior=k;
                }
                k++;
            }
            i++;
        }

    printf("%d (%d, %d)", maior, lMaior+1, cMaior+1);
        
}

    return 0;
}