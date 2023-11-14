#include <stdio.h>
 
typedef struct {
    int codigo;
    float preco;
    int qtdEstoque;
} tProduto;  

tProduto LeProduto() {
    tProduto p;
    scanf("%d;%f;%d", &p.codigo, &p.preco, &p.qtdEstoque);
    return p;
}

int EhProduto1MaiorQ2(tProduto p1, tProduto p2) {
    if (p1.preco > p2.preco) {
        return 1;
    }
    return 0;
}

int EhProduto1MenorQ2(tProduto p1, tProduto p2) {
    if (p1.preco < p2.preco) {
        return 1;
    }
    return 0;
}

int TemProdutoEmEstoque(tProduto p) {
    if (p.qtdEstoque > 0) {
        return 1;
    }
    return 0;
}

void ImprimeProduto(tProduto p) {
    printf("COD %d, PRE %.2f, QTD %d\n", p.codigo, p.preco, p.qtdEstoque);
}

int main() {
    int qtdProdutos, i = 0;
    tProduto p, maior, menor;

    scanf("%d", &qtdProdutos);

    if (qtdProdutos > 0) {

        while (qtdProdutos > i) {
            p = LeProduto();
            if(i==0){ 

            maior = p;
            menor = p;
            }

            if (EhProduto1MaiorQ2(p, maior)) {
                maior = p;
            }

            if (EhProduto1MenorQ2(p, menor)) {
                menor = p;
            }

            if (!TemProdutoEmEstoque(p)){
                printf("FALTA:");
                ImprimeProduto(p);
            }
            i++;

        }
    }

    printf("MAIOR:");
    ImprimeProduto(maior);
    printf("MENOR:");
    ImprimeProduto(menor);

    return 0;
}
