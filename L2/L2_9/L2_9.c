#include<stdio.h>

int main(){

int n, m, i=0, a=0, cont=0, multi=0, cont2=0;

scanf("%d %d", &n, &m);

for (i=1+n; i<m; i++){
    for(a=1; a<=i; a++){
        if (i%a==0) //avaliacao de ser ou nao primo
            cont++;
            cont2=0;
}
        if (cont == 2){ //se tiver contador igual a 2 (primo) 
            printf("%d\n", i); //imprime o numero
            for(multi=i+1; multi<m; multi++){
                if (multi%i == 0){
                    printf("%d ", multi);
                    cont2++;}
        

                }
                if (cont2==0){
                    printf("*");
                }
            
            printf("\n");


        }cont=0; //depois de imprimir um numero primo ele zera o contador
        
}
          
    return 0;
}