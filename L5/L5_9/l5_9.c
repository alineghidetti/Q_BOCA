#include <stdio.h>

#define MAX 100
#define DELIM -1

typedef int tInfo;

void printInfo(tInfo info) {
   printf("%d", info);
}

tInfo readInfo(void) {
   tInfo info;
   scanf("%d", &info);
   return info;
} 

typedef struct {
   tInfo info[MAX];
   int n;
} tList;

tList readList(tInfo N) {
   tList l;
   for (l.n = 0; l.n < N; l.n++) { 
      l.info[l.n] = readInfo();
   }
   return l;
}

void printList(tList l) {
   int i;
   for (i = 0; i < l.n; i++) {
      printInfo(l.info[i]);
      if (i < l.n - 1) {
         printf(", ");
      }
   }
}

tList exchangeInfoList(tList l, int i, int j) {
   tInfo info;
   info = l.info[i];
   l.info[i] = l.info[j];
   l.info[j] = info;
   return l;
}

tList inverteVetor(tList l) {
   tInfo i, aux;
   for (i = 0; i < l.n / 2; i++) {
      aux = l.info[i];
      l.info[i] = l.info[l.n - i - 1];
      l.info[l.n - i - 1] = aux;
   }
   return l;
}

int main() {
   tList l;
   tInfo N, i;
   scanf("%d", &N);
   l = readList(N);
   l = inverteVetor(l);
   printf("{");
   printList(l);
   printf("}");
   return 0;
}
