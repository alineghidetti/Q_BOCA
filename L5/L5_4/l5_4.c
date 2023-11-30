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

void printInfo(tInfo info) {
   printf ("%d", info);
}

tInfo readInfo(void) {
   tInfo info;
   scanf ("%d", &info);
   return info;
} 

int compareInfo(tInfo info1, tInfo info2){
   if (info1 < info2) return -1;
   if (info1 > info2) return 1;
   return 0;
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

void printList (tList l) {
   int i;
   for (i = 0; i < l.n; i++) {
      printInfo(l.info[i]);
      printf(" ");
   }
}

tList exchangeInfoList (tList l, int i, int j) {
   tInfo info;
   info = l.info[i];
   l.info[i] = l.info[j];
   l.info[j] = info;
   return l;
}

tList sortList (tList l) {
   int i, j;
   for (j = 0; j < l.n; j++) {
   	for (i = 0; i < l.n-1; i++) {
   	   if (compareInfo (l.info[i], l.info[i+1]) > 0) {
   	   	l = exchangeInfoList(l, i, i+1);
   	   }
   	}
   }
   return l;
}

tInfo dentroIntervalo(tList l, tInfo x, tInfo y){
    tInfo i, dentro=0;
    for(i=0; i<l.n; i++){
        if(l.info[i]>=x && l.info[i]<=y){
            dentro++;
        }
    }
    return dentro;
}


int main() {
    tList l;
    tInfo N, i, num, a, b, dentro=0, fora=0;
    scanf("%d", &N);
    l=readList(N);
    scanf("%d %d", &a, &b);
    dentro = dentroIntervalo(l, a, b);
    fora = N - dentro;
    printf("%d %d", dentro, fora);
    /*
    printList(l);
    l = sortList(l);
    */
    return 0;
}
