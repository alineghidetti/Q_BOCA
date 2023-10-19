#include <stdio.h>
int main(){
    int qtd, num, i=0, k=0, mM7=0, menorPar=99998;
    float somaImpar=0, somaTotal=0;
    scanf("%d", &qtd);
    if(qtd>0){    
        while(i<qtd){
            scanf("%d", &num);
            somaTotal+=num;

            if(num%7==0){
                if(num>mM7){
                    mM7=num;
                }
            }
            if(num%2==0){
                if(num<menorPar){
                    menorPar=num;
                }
            }
            else{
                somaImpar+=num;
                k++;
            }
            i++;
        }

        if(mM7!=0){
            printf("%d ", mM7);
        }
        
        if (menorPar!=99998){
            printf("%d ", menorPar);
        }

        if (k!=0){
            printf("%.2f ", (float)somaImpar/k);
        }
        
        if (num!=0){
            printf("%.2f", (float)somaTotal/i);
        }

    return 0;
    }
}