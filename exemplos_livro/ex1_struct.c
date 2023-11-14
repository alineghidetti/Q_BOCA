#include <stdio.h>

typedef struct{
    int idade,
        matricula,
        periodo;
    float coeficiente;
} tEstudante;

int main(){
    tEstudante aluno;

    printf("Digite os dados do estudante:\n");
    scanf("%d %d %d %f", &aluno.idade, &aluno.matricula, &aluno.periodo, &aluno.coeficiente);
    printf("Estudante %d\nIdade: %d\nPeriodo: %d°\nCoeficiente: %.2f", aluno.matricula, aluno.idade, aluno.periodo, aluno.coeficiente);

}