#include <stdio.h>
#include <math.h>
int main(){
    int n, k=0;
    float pi, sum=0;
    scanf("%d", &n);
    while (k<n){
        k++;
        sum+=(float)6/(k*k);
    }
    pi=sqrt(sum);
    printf("%.6f", pi);

    return 0;
}

