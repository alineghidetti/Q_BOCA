#include <stdio.h>

int main(){
    int lado1, lado2, lado3;
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if ((lado1*lado1)+(lado2*lado2)==(lado3*lado3) || (lado3*lado3)+(lado2*lado2)==(lado1*lado1) ||(lado1*lado1)+(lado3*lado3)==(lado1*lado1) ){
        printf("Eh Triangulo Retangulo\n");
    }
    else{
        printf("Nao eh Triangulo Retangulo\n");
    }

    return 0;
}