#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    n=n+1;
    printf("RESP:");
    while(n<m){
        if (n%2 == 0){
            printf("%d ", n);
        }
        n++;
    }

}