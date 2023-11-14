#include <stdio.h>

int maiorDiferenca (int qtd, int vet[qtd]){
    int i, dif, maior;
    if(qtd<2)
    return -1;
    for(i=0;i<qtd;i++){
        if(i!=0){
            dif = vet[i-1]- vet[i];
            if(dif<0){
                dif *= -1;
            }
            if(i==1){
                maior = dif;
            }
            if(dif>maior){
                maior = dif;
            }
        }
    }
    return maior;
}

void verificaPares(int qtd, int vet[qtd], int maior)
{
    int i, dif = 0, n1, n2;
        for (i = 0; i < qtd; i++)
        {
            if (i != 0)
            {
                dif = vet[i-1] - vet[i];
                if (dif < 0){
                    dif *= -1;
                }
                if(dif == maior){
                    printf(" (%d %d)", i-1, i);
                }
            }
        }
}

int main(){
    int N, i, maior;
    scanf("%d", &N);
    int postes[N];

    for(i=0; i<N; i++){
        scanf("%d", &postes[i]);
    }

    maior = maiorDiferenca(N, postes);

    if(maior==-1)
    printf("IMPOSSIVEL");
    else
    verificaPares(N, postes, maior);


    return 0;
}