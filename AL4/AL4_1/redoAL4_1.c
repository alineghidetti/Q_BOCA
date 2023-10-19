#include <stdio.h>
#include <math.h>

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
    return result;}

int enesimoTermo(int n) {
    int num1=0, num2=1, num3=2, num4=0, cont=3, result;
    if(n==1){
        result = 0;
    }
    else if(n==2){
        result = 1;
    }
    else if(n==3){
        result = 2;
    }
    else{ 
        while(cont<n){
            num4 = (num3 * num2) - num1;
            num1=num2;
            num2=num3;
            num3=num4;
            cont++;
        }
        result = num4;
    }
    return result;
}

int enesimaPotencia(int m, int n) {
    int result;
    result = pow (m, n);
    return result;
}

int enesimoMultiploComum(int n, int num1, int num2) {
    //MMC
    int i=1, cont=0;

    while(cont<n){
        if(i%num1==0 && i%num2 ==0){
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