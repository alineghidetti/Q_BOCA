#include <stdio.h>
#define MAX_LIN 10
#define MAX_COL 10

typedef int tInfo;

typedef struct{
    tInfo info[MAX_LIN][MAX_COL];
    tInfo nlin, ncol;
}tMatriz;


tMatriz preencheMatriz(tMatriz mat){
    int i, j;
    for(i=0; i<mat.nlin; i++){
        for(j=0; j<mat.ncol; j++){
            scanf("%d", &mat.info[i][j]);
        }
    }
    return mat;
}

void printMatriz(tMatriz mat){
    int i, j;
    for(i=0; i<mat.nlin; i++){
        for(j=0; j<mat.ncol; j++){
            printf("%d ", mat.info[i][j]);
        }
            printf("\n");
    }    
}

tInfo somaTrianguloInferior(tMatriz mat){
    float soma;
    int i, j;
    soma=0;
    for(j=0; j<mat.ncol; j++){
        for(i=j+1; i<mat.nlin; i++){
            soma+=mat.info[i][j];
        }
    }
    return soma;
}

tMatriz TranspostaMat(tMatriz mat){
    int i, j;
    tMatriz transposta;
    transposta.ncol = mat.nlin;
    transposta.nlin = mat.ncol;
    
    for(i = 0; i<mat.nlin; i++){
        for(j = 0; j<mat.ncol; j++){
            transposta.info[j][i] = mat.info[i][j];
        }
    }
    return transposta;
}

float somaLinha(tMatriz mat, int lin){
    int i, j;
    float soma=0;
    for(i=0; i<mat.ncol; i++){
        soma+=mat.info[lin][i];
    }
    return soma;
}

float somaColuna(tMatriz mat, int col){
    int i;
    float soma=0;
    for(i=0; i<mat.nlin; i++){
        soma+=mat.info[i][col];
    }
    return soma;
}

float somaDiagonalPrincipal(tMatriz mat){
    int i, j, del;
    float soma=0;

    if(mat.nlin > mat.ncol){
        del=mat.ncol;
    }else{
        del=mat.nlin;
    }

    for(i = 0; i < del; i++){
        soma+=mat.info[i][i];
    }
    return soma;
}

float somaDiagonalSecundaria(tMatriz mat){ 
    int i, j, del;
    float soma=0;

    if(mat.nlin > mat.ncol){
        del=mat.ncol;
    }else{
        del=mat.nlin;
    }

    for(i = 0; i < del; i++){
        soma+=mat.info[i][del-i];
    }
    return soma;
}

float somaMatriz(tMatriz mat){
    int i, j;
    float soma;
    for(i = 0; i < mat.nlin; i++){
        for(j = 0; j < mat.ncol; j++){
            soma+=mat.info[i][j];
        }
    }
    return soma;
}

tInfo quadradoMagico(tMatriz mat){
    //verifica se a soma de cada linha e a soma de cada coluna são todas iguais
    int i, j;
    float soma;
    soma = somaDiagonalPrincipal(mat);
    if(soma != somaDiagonalSecundaria(mat)){
        return 0;
    }

    for(i = 0; i < mat.nlin; i++){
        for(j = 0; j < mat.ncol; j++){
            if(soma != somaColuna(mat, j)){
                return 0;
            }
            if(soma != somaLinha(mat, i)){
                return 0;
            }
        }
    }
    return 1;
}

float somaViz(tMatriz mat, int lin, int col){
    int i, j;
    float soma;
    soma=0;
    soma = -mat.info[lin][col];
    for(i = lin - 1; i <= lin + 1; i++){
        for(j = col - 1; j <= col + 1; j++){
            if(!(i < 0 || j < 0 || i >= mat.nlin || j >= mat.ncol)){
                soma += mat.info[i][j];
            }
        }
    }
    return soma;
}

void maiorViz(tMatriz mat){
    int i, j;
    int l, c;
    float soma, somaMaior;
    somaMaior = somaViz(mat, 0, 0);
    l = 0;
    c = 0;
    for(i=0; i<mat.nlin; i++){
        for(j=0; j<mat.ncol; j++){
            soma = somaViz(mat, i, j);
            if (soma > somaMaior) {
                somaMaior = soma;
                l = i;
                c = j;
            }
        }
    }
   printf ("Posicao (%d, %d) - soma de vizinhos = %.2f.\n", l, c, somaMaior);
}

int main(){
    tMatriz mat;
    float result;
    scanf("%d %d", &mat.nlin, &mat.ncol);

    mat = preencheMatriz(mat);
    printf("\n");
    printMatriz(mat);
    printf("\n");

    /*
    result = somaTrianguloInferior(mat);
    mat = TranspostaMat(mat);
    printMatriz(mat);
    result = somaLinha(mat, 0);
    result = somaDiagonalPrincipal(mat);
    result = somaColuna(mat, 0);    
    printf("%.2f\n", result);

    result = somaColuna(mat, 1);
    printf("%.2f\n", result);

    result = somaColuna(mat, 2);
    printf("%.2f\n", result);
    if(quadradoMagico(mat)){
        printf("Quadrado Mágico!");
    }else{
        printf("Esse quadrado é trouxa.");
    }
    result = somaDiagonalSecundaria(mat);
    printf("soma da matriz secundaria: %.2f", result);
    */

    maiorViz(mat);

}
 