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
    float soma;
    for(i=0; i<mat.nlin; i++){
        soma+=mat.info[i][col];
    }
    return soma;
}

tInfo quadradoMagico(tMatriz mat){
    //verifica se a soma de cada linha e a soma de cada coluna são todas iguais
    int i, j;
    float magico;
    magico = somaLinha(mat, 0);
    for(i = 0; i < mat.nlin; i++){
        for(j = 0; j < mat.ncol; j++){
            if(magico == somaColuna(mat, i)){

            }
        }
    }
}

int main(){
    tMatriz mat;
    float result;
    scanf("%d %d", &mat.nlin, &mat.ncol);

    mat = preencheMatriz(mat);
    //printMatriz(mat);
    //result = somaTrianguloInferior(mat);
    mat = TranspostaMat(mat);
    printMatriz(mat);
    //result = somaLinha(mat, 0);
    result = somaColuna(mat, 0);    
    printf("%.2f", result);
    

}
 