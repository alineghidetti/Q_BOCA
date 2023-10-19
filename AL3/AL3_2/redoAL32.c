#include <stdio.h>
int main(){
    int qtd,
        i=1,
        k=1,
        cont=0,
        num=2;

    scanf("%d", &qtd);

    while(i<=qtd){
        k=1;
        cont=0;
        while(k<=num){
            if(num%k==0){
                cont++;
            }
            k++;
        }
        if(cont==2){
            i++;
            printf("%d\n", num);
        }
        num++;

    }
}