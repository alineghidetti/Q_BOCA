#include <stdio.h>

int main(){
    int n, m, multi, i=1;
    scanf("%d %d", &n, &m);
    
    while(n<=m){
        while(i<=10){
            printf("%d x %d = %d\n", n, i, n*i);
            i++;
        }
        i=1;
        n++;
    }
}