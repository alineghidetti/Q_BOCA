#include <stdio.h>
int main(){
    int original, reverso=0, aux, digito;
    scanf("%d", &original);
    aux = original;
    //123
    while(aux>0){
        digito=aux%10;
        reverso=reverso*10+digito;
        aux=aux/10;
    }
    if(original==reverso){
        printf("SIM");
    }
    else{
        printf("NAO");
    }

    return 0;
}