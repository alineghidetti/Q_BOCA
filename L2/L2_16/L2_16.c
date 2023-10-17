#include <stdio.h>
int main(){
    int n, i=0, menor, pri=-1, seg=-1;
    char c;

    while (scanf("%d", &n)==1){
        if(i==0){
            menor=n;
        }
        if(n<menor){
            menor=n;
        }
        i++;
    }
    i=0;
    if (scanf("%c", &c)==1){
        while(scanf("%d", &n)==1){
            if(n==menor){
                if(pri==-1){
                    pri=i;
                    //printf("pri %d\n", pri);
                }

                seg=i;
                    //printf("seg %d\n", seg);

                
            }
            i++;
        }
    }
    if (pri==-1){
        printf("%d %d %d", menor, i, i);
    }
    else{
        printf("%d %d %d", menor, pri, seg);
    }

    return 0;
}