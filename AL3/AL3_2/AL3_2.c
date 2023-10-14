#include <stdio.h>

int main(){

    int qtd,
        i=1,
        k=1,
        num=2,
        div=0;

    scanf("%d", &qtd);
    if (qtd>0){
        while(i<=qtd){
            div=0;
            k=1;
            while(k<=num){
                if (num%k==0){
                    div++;
                }
                k++;
            }
            if(div==2){
                i++;
                printf("%d ", num);
            }
            num++;
        }
    }
    return 0;
}