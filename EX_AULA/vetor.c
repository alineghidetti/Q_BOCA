#include <stdio.h>
#define MAX 100

typedef struct{
    int vet[MAX];
    int n;
} tList;

void ordenaVetor(int vet[], int n) {
    int i, j, aux;
    for(i = 1; i < n; i++) {
        for(j = 0; j < i; j++) {
            if(vet[i] < vet[j]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

tList insereNum(tList l, int num){
    l.vet[l.n]=num;
    l.n++;
    return l;
}

tList insereOrdenado(tList l, int num) {
    l.vet[l.n] = num;
    l.n++;
    ordenaVetor(l.vet, l.n);
    return l;
}

tList excluiPos (tList l, int pos){
    //exluir uma posição
    int i=0;
    for(i=pos; i<l.n-1; i++){
        l.vet[i]=l.vet[i+1];
    }
    l.n-=1;
    return l;
}

tList excluiNum(tList l, int num){
    //verificar se encontra numero, se sim, parar loop e apagar
    //verificar novamente até não encontrar mais
    int i=0;
    for(i=0; i<l.n; i++){
        if(l.vet[i]==num){
            l=excluiPos(l, i);
        }
    }
    return l;
}

void imprimeVetor(tList l){
    int i;
    for(int i = 0; i < l.n; i++) {
        printf("%d ", l.vet[i]);
    }
    printf("\ntamanho:%d ", l.n);
}

int main() {
    tList l;
    int num;
    l.n = 5;
    l.vet[0] = 24;
    l.vet[1] = 23;
    l.vet[2] = 22;
    l.vet[3] = 23;
    l.vet[4] = 13;

    scanf("%d", &num);
    //insere numero
    //l=insereNum(l, num);

    //insereOrdenado(l.vet, &l.n, num);
    //l=insereOrdenado(l, num);

    //exlui numero
    //l=excluiNum(l, num);

    //exclui posica
    //l=excluiPos(l, num);

    imprimeVetor(l);
    return 0;
}
