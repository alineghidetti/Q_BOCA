#include <stdio.h>

int main(){

    int num, m7=0, mp=99998, somai=0, i=0, imp=0, soma=0 ;
    
    scanf("%d", &num);

    while (num>0){   
        soma=soma+num;
        i++;

        if (num%7==0){
            if (num>m7){
                m7=num;
            }
        }

        if (!(num%2==0)){
            somai=somai+num;
            imp++;
        }

        if (num%2==0){
            if (num<mp){       
                mp=num;
            }
        }      
        scanf("%d", &num);
        
    }

    if(m7!=0){
        printf("%d ", m7);
    }
    
    if (mp!=99998){
        printf("%d ", mp);
    }

    if (imp!=0){
        printf("%.2f ", (float)somai/imp);
    }
    
    if (num!=0){
        printf("%.2f", (float)soma/i);
    }
    return 0;
}