#include <stdio.h>

#define MAX 100
#define DELIM -1

/* typedef float tInfo;

void printInfo(tInfo info) {
   printf ("%.2f", info);
}

tInfo readInfo(void) {
   tInfo info;
   scanf ("%f", &info);
   return info;
}
*/

typedef int tInfo;

tInfo readInfo(void) {
   tInfo info;
   scanf ("%d", &info);
   return info;
} 

int compareInfo(tInfo info1, tInfo info2){
   return (info1 == info2) ? 1 : 0;
}

typedef struct {
   tInfo info[MAX];
   int n;
} tList;

tList readList (tInfo N) {
   tList l;
   for(l.n=0; l.n<N; l.n++){ 
    l.info[l.n] = readInfo();
   }
   return l;
}

tInfo isPA(tList l){
    tInfo r, i, flag=0;
    r = l.info[1]-l.info[0];

    for(i=1; i<l.n; i++){
        if((l.info[i]-l.info[i-1]) != r){
            return 0;
        }
    }
    return 1;
}


int main() {
    tList l;
    tInfo i, j, N, result, r;
    scanf("%d", &N);

    l = readList(N);
    r = l.info[1]-l.info[0];

    if(N>1){
        result = isPA(l);

        if(result){
            printf("RESP:%d", r);
        }
        else{
            printf("NAO");
        }
    }
    else{
        printf("NAO");

    }

    return 0;
}
