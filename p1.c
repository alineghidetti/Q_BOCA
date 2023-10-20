#include <stdio.h>

int somaNumero(int n){
    int soma=0;
    while(n>0){
        soma+=n%10;
        n/=10;
    }
    return soma;
}

int hashSimples(int n, int m){
    int aux, result;
    aux = somaNumero(n);
    result = aux%m;
    return result;
}

void decodifica(){
    //funcao que le numeros usando a hashSimples e decodifica até receber n=-1;
    int m=17, n;
    scanf("%d", &n);
    while(n!=-1){
        printf("%d\n", hashSimples(n, m));
        scanf("%d", &n);
    }
}

int linha(int n, int m){
    int i=0;
    while(i<n){
        printf(" ");
        i++;
    }
    i=0;
    while(i<m){
        printf("*");
        i++;
    }


}

int ampulheta(){ //lembro que recebia um numero par não negativo e que no meio eram 2 *s
    int qtdA, e=0, a=0;
    scanf("%d", &qtdA);
    a=qtdA;
    if(qtdA>0 && qtdA%2==0){
        while(a>=2){
            printf("\n");
            linha(e, a);
            e++;
            a-=2;
        }
        while(a<=qtdA){
            linha(e, a);
            printf("\n");
            e--;
            a+=2;            
        }
    }

}

int main(){
    int n, m, result;

    decodifica();

    ampulheta();

    //teste somaNumeros
    /*
    scanf("%d", &n);

    result=somaNumero(n);
    printf("%d", result);
    */

    //teste hashSimples
    /*
    scanf("%d %d", &n, &m);
    result=hashSimples(n, m);
    printf("%d", result);
    */
    
    //teste decodifica
    /*
    decodifica();
    */

    //teste linha
    /*
    scanf("%d %d", &n, &m);
    linha(n, m);
    */

    //teste ampulheta
    /*
    ampulheta();
    */

}