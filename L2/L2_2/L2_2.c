#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    n=n+1;

    while(n<m){
        if(n%3 == 0 || n%4 == 0 || n%7 == 0){
            printf("%d ", n);
        }
        n++;
    }
}