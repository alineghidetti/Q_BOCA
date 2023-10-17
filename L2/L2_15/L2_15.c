#include <stdio.h>
int main(){
    int n, neg=0, pos=0, sneg=0, spos=0;
    while (scanf("%d", &n)==1){
        if (n<0){
            neg++;
            sneg+=n;
        }
        else if (n>0){
            pos++;
            spos+=n;
        }
    }
    printf("%d %d %d %d", neg, pos, sneg, spos);
    return 0;
}