#include <stdio.h>
/*
A série de Flavionacci começa com os números naturais 0 1 2 e 
cada novo termo corresponde a multiplicação dos dois anteriores 
subtraída do terceiro antecessor. Eis um exemplo da série
com 8 termos: 0 1 2 2 3 4 10 37.
1 3 2 5 3 2 3 4 5 2 3 0
5 3 8 30

posicao do termo = i
termo = n

*/

int enesimoPrimo(int n) {
    int cont=0, result, div=1, num=1, contprimo=0;
    while(contprimo<n){
        for(div=1; div<=num; div++){
            if(num%div==0){
                cont++;
            }
        }
    if (cont==2){
        result=num;
        contprimo++;
    }
    cont=0;
    num++;
    }
    return result;
}
int enesimoTermo(int n) {
//enesimo termo = (ni*ni-1)-(ni-2)
    if (n==1){
        return 0;
    }
    else if (n==2){
        return 1;
    }
    else if (n==3){
        return 2;
    }
    else{
        int termo_menos_1 = (enesimoTermo (n - 1));
        int termo_menos_2 = (enesimoTermo (n - 2));
        int termo_menos_3 = (enesimoTermo (n - 3));

        return ((termo_menos_1 * termo_menos_2)-termo_menos_3);
        
    }
}

int enesimaPotencia(int m, int n) {
    int resultado=1;
    int i=0;

    while(i<n){
        i++;
        resultado=resultado*m;
    }

    return resultado;
}

int enesimoMultiploComum(int n, int num1, int num2) {
//MENOR MULTIPLO COMUM

    int cont = 0,
        i = 1;

    while (cont<n){
        if(i%num1==0 && i%num2==0){
            cont++;
        }

        i++;
    }

    return i-1;


}

int main(){
    int opc, n, num1, num2, result;


    scanf ("%d", &opc);
    while (opc){
        switch (opc) {
            case 1: 
                scanf ("%d", &n);
                result = enesimoPrimo(n);
                printf(" %d ", result);
                break;
            case 2: 
                scanf ("%d", &n);
                result = enesimoTermo(n);
                printf(" %d ", result);
                break;
            case 3:
                scanf ("%d%d", &num1, &num2);
                result = enesimaPotencia(num1, num2);
                printf(" %d ", result);
                break;
            case 4:
                scanf ("%d%d%d", &n, &num1, &num2);
                result = enesimoMultiploComum(n, num1, num2);
                printf(" %d ", result);
                break;
            default:
                printf("Opcao Invalida! ");
        }
        scanf ("%d", &opc);
    }
    return 0;
}