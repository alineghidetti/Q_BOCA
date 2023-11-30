#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#define MAX 1000
 
typedef struct{ 
 int codigo; 
 char sobrenome[21]; 
 char nome[21]; 
 int nota; 
 int idade; 
} tCandidato; 

typedef struct {
   tCandidato info[MAX];
   int n;
} tList;
 
tCandidato LeCandidato(); 
void ImprimeCandidato(tCandidato candidato); 
 
tList OrdenaCrescente(tList cand) {
    int i, j;
    tCandidato temp;

    for (i = 1; i < cand.n; i++) {
        for (j = 0; j < i; j++) {
            if (strcmp(cand.info[i].nome, cand.info[j].nome) < 0 ||
                (strcmp(cand.info[i].nome, cand.info[j].nome) == 0 &&
                 strcmp(cand.info[i].sobrenome, cand.info[j].sobrenome) < 0)) {

                temp = cand.info[i];
                cand.info[i] = cand.info[j];
                cand.info[j] = temp;
            }
        }
    }

    return cand;
}
 
int main(){ 
 int qtdCand, i = 0, j; 
  
 scanf("%d", &qtdCand); 
  //tCandidato candidatos[qtdCand]; 
  tList candidatos;
  candidatos.n = qtdCand;
  
 for(i = 0; i < qtdCand; i++){ 
  candidatos.info[i] = LeCandidato(); 
 } 
 
 candidatos = OrdenaCrescente(candidatos); 
  
 for(i = 0; i < qtdCand; i++){ 
  ImprimeCandidato(candidatos.info[i]); 
 } 
  
    return 0;     
}

 tCandidato temp;
tCandidato LeCandidato(){ 
 tCandidato candidato; 
 scanf("%*[^{]"); 
 scanf("%*[{ ]"); 
 scanf("%d", &candidato.codigo); 
 scanf("%*[, ]"); 
 scanf("%[^,],", candidato.sobrenome); 
 scanf("%*[ ]"); 
 scanf("%[^,],", candidato.nome); 
 scanf("%d", &candidato.nota);  scanf("%*[, ]");  scanf("%d", &candidato.idade);  scanf("%*[^\n]\n");  return candidato; }  void ImprimeCandidato(tCandidato candidato){  printf("CAND(%d): %s %s, Nota:%d, Idade:%d\n",     candidato.codigo, candidato.nome,     candidato.sobrenome, candidato.nota, candidato.idade); }