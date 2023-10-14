#include <stdio.h>

int main(){
    int qtd, num, i=0, maior=-1, menor=99998, pares=0, impares=0;
    float media, soma=0;
    scanf("%d", &qtd);
    while(i<qtd){
        scanf("%d", &num);
        soma+=num;
        if (num > maior){
            maior=num;
        }
        if (num < menor){
            menor = num;
        }
        if (num%2 == 0){
            pares++;
        }
        else{
            impares++;
        }
        i++;
    }

    printf("%d %d %d %d %.6f", maior, menor, pares, impares, soma/qtd);
}