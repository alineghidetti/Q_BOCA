#include <stdio.h>

int main(){
    int i=1; //AUXILIARES, UTILIZAR i COMO CONTADOR DE DELEGACAO
    int qtd; //DADOS DELEGACAO
    int idA, id_melhor_mas=0, id_pior_mas=0, id_pior_fem=0, id_melhor_fem; //DADOS ATLETA
    char sexo; //F OU M
    int n1, n2, n3, na, nb, nc; //NOTAS
    int mn1m=-1, mn2m=-1, mn3m=-1, pn1m=11, pn2m=11, pn3m=11; //MELHORES E PIORES NOTAS MASC
    int mn1f=-1, mn2f=-1, mn3f=-1, pn1f=11, pn2f=11, pn3f=11; //MELHORES E PIORES NOTAS FEM
    int sum_campea_feminina=0, sum_campeao_masculino=0, sum_maiorn_masculina=0, sum_maiorn_feminina=0, id_campeao_masculino, id_campea_feminina;

    scanf("%d", &qtd);

    while(i<=qtd){
        while(1){

            scanf("%d", &idA);
            //printf("(%d)\n", idA);
            if(idA==-1){
                if(sum_maiorn_masculina>sum_campeao_masculino){
                    sum_campeao_masculino=sum_maiorn_masculina;
                    id_campeao_masculino=i;
                    //printf("-%d-\n", id_campeao_masculino);
                }
                if(sum_maiorn_feminina>sum_campea_feminina){
                    sum_campea_feminina=sum_maiorn_feminina;
                    id_campea_feminina=i;
                    //printf("-%d-\n", id_campea_feminina);
                }
                //printf("(%d %d)\n", sum_campeao_masculino, sum_campea_feminina);
                
                mn1m=-1; pn1m=11; mn1f=-1; pn1f=11; 
                mn2m=-1; pn2m=11; mn2f=-1; pn2f=11; 
                mn3m=-1; pn3m=11; mn3f=-1; pn3f=11;
                sum_maiorn_feminina=0, sum_maiorn_masculina=0;
                break;
            }

            scanf(" %c %d %d %d", &sexo, &na, &nb, &nc);

            //ORDENAR NOTAS
            if(na>=nb && nb>=nc){
                n1=na;
                n2=nb;
                n3=nc;
            }
            else if(nb>=na && na>=nc){
                n1=nb;
                n2=na;
                n3=nc;
            }
            else if(nc>=na && na>=nb){
                n1=nc;
                n2=na;
                n3=nb;
            }
            else if(nb>=nc && nc>=na){
                n1=nb;
                n2=nc;
                n3=na;
            }
            else if(nc>=nb && nb>=na){
                n1=nc;
                n2=nb;
                n3=na;
            }
            else if(na>=nc && nc>=nb){
                n1=na;
                n2=nc;
                n3=nb;
            }

            //printf("%d %d %d\n", n1, n2, n3);

            //COMPARAR NOTAS DOS ATLETAS DE CADA DELEGACAO
            if(sexo=='M'){
                if((n1>mn1m)||(n1==mn1m && n2>mn2m)||(n1==mn1m && n2==mn2m && n3>mn3m)){ //ENCONTRANDO O MELHOR ATLETA MASCULINO
                    id_melhor_mas=idA;
                    mn1m=n1;
                    mn2m=n2;
                    mn3m=n3;
                    //printf("pior homi %d\n", id_pior_mas);
                }
                
                if((n1<pn1m)||(n1==pn1m && n2<pn2m)||(n1==pn1m && n2==pn2m && n3<pn3m)||(n1==pn1m && n2==pn2m && n3==pn3m)){ //ENCONTRANDO A PIOR ATLETA FEMININA
                    id_pior_mas=idA;
                    pn1m=n1;
                    pn2m=n2;
                    pn3m=n3;
                    //printf("pior homi %d\n", id_pior_mas);
                }
                sum_maiorn_masculina+=n1;
                //printf("(%d)\n", sum_maiorn_masculina);
            }

            else if(sexo=='F'){
                if((n1>mn1f)||(n1==mn1f && n2>mn2f)||(n1==mn1f && n2==mn2f && n3>mn3f)){ //ENCONTRANDO A MELHOR ATLETA FEMININA
                    id_melhor_fem=idA;
                    mn1f=n1;
                    mn2f=n2;
                    mn3f=n3;
                }
                if((n1<pn1f)||(n1==pn1f && n2<pn2f)||(n1==pn1f && n2==pn2f && n3<pn3f)||(n1==pn1f && n2==pn2f && n3==pn3f)){ //ENCONTRANDO A PIOR ATLETA FEMININA
                    id_pior_fem=idA;
                    pn1f=n1;
                    pn2f=n2;
                    pn3f=n3;
                }
                sum_maiorn_feminina+=n1;
                //printf("(%d)\n", sum_maiorn_feminina);
            }


            
        }

        printf("MELHORES ATLETAS DA DELEGACAO %d\n", i);
        printf("MASCULINO: %d FEMININO: %d\n", id_melhor_mas, id_melhor_fem);
        printf("PIORES ATLETAS DA DELEGACAO %d\n", i);
        printf("MASCULINO: %d FEMININO: %d\n", id_pior_mas, id_pior_fem);
        printf("\n");
        i++;
    }
        printf("DELEGACAO CAMPEA:\n");
        printf("MASCULINO: %d FEMININO: %d", id_campeao_masculino, id_campea_feminina);



    return 0;
}