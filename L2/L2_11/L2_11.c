#include <stdio.h>

int main(){
    int n,m,ab,cd,ef,i=0;
    scanf("%d %d", &n, &m);
    n=n+1;

    //contando que os numeros estao entre 1000 e 9999
    while(n<m){
        ab=n/100;
        cd=n%100;
        ef=ab+cd;
        if (ef*ef == n){
            printf("%d\n", n);
        }
        //printf("%d %d\n", ab, cd);
        n++;
    }

    return 0;
}