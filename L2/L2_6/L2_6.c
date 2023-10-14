#include <stdio.h>
#include <math.h>

int main(){

    int num, k, i;
    double result=0;
    scanf("%d", &num); //receber opcao de 1 a 3

    if (num == 1){
        i=1;
        k=1;
        while(i<=99){
            while(k<=50){
                result += (double)i/k;
                k++;
                i+=2;
            }
        }

    }

    else if (num == 2){
        i=1;
        k=50;
        while(i<=50){
            while(k>=1){
                result += pow(2, i)/k;
                i++;
                k--;
            }
        }
    }

    else if (num == 3){
        i=1;
        k=1;
        while(i<=10){
            result += i/(pow(i, 2));
            //printf("%lf\n", result);
            i++;
        }
        
    }

    printf("%.6lf", result);

    return 0;
}