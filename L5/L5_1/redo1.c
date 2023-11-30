#include <stdio.h>
#include <math.h>

#define MAX 100
#define DELIM -1

typedef int tInfo; //para receber notas

typedef struct {
   tInfo info[MAX];
   int n;
} tList;

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


tList readList (void) {
   tList l;
   l.n = 0;
   l.info[l.n] = readInfo();
   while (l.info[l.n] != DELIM) {
    l.n++;
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

float desvio (tList l, tInfo m){
    int i=0;
    tInfo aux=0;
    for (i=0; i<l.n; i++){
        aux += pow(l.info[i]-m,2);
    }
    return sqrt(aux/l.n);
}

int main() {
    tInfo N, maior, menor, acima=0, reprov=0;
    float soma=0, std, media;
    tList l;
    scanf("%d", &N);
    for(l.n=0; l.n<N; l.n++){
        l.info[l.n]=readInfo();
        soma+=l.info[l.n];
        if(l.info[l.n]<70){
            reprov++;
        }
    }
    l = sortList(l);
    printf("\n");
    menor = l.info[0];
    maior = l.info[l.n-1];
    media = soma/l.n;

    for(l.n=0; l.n<N; l.n++){
        if (l.info[l.n]>media){
            acima++;
        }
    }
    std = desvio(l, media);
    printf("MENOR:%d, MAIOR:%d, MEDIA:%.2f, STD:%.2f, ACIMA_MEDIA_CONC:%d, REPROV:%d", menor, maior, media, std, acima, reprov);

   //printList (l);
    /*
   tList l;
   l = readList();
   l = sortList(l);
   printf("\n");
    */
   return 0;
}