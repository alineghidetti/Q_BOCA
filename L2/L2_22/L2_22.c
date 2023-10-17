#include <stdio.h>
int main(){
    int num, soma=0;
    scanf("%d", &num);
    printf("RESP:");

    while(1){
        soma+=num%10;
        num=num/10;
        if(soma<10 && num == 0){
            printf("%d", soma);
            break;
        }
        if(soma>9 && num == 0){
            num = soma;
            soma = 0;
        }
    }
    return 0;
}