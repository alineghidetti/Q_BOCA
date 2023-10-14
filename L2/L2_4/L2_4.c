#include <stdio.h>

int main(){
    int num=1, maior=-1;
    float soma, cont;
    while (num!= 0){
        scanf("%d", &num);
        soma+=num;
        cont++;
        if (num > maior){
            maior=num;
        }
        if(num){
            printf("%d %.6f\n", maior, soma/cont);
        }
    }
}