#include <stdio.h>
 
typedef struct{
    int dia;
    int mes;
    int ano;
}tData;

tData leData(){
    tData data;
    scanf("%d %d %d\n", &data.dia, &data.mes, &data.ano);

    return data;
};



int anoBissexo (tData d){
    if (d.ano%4==0){
        return 1;
    }
    return 0;
}

int diasMes (tData d){
        if (d.mes == 1 ||d.mes == 3 ||d.mes == 5 ||d.mes == 7 ||d.mes == 8 ||d.mes == 10 ||d.mes == 12 ){
            return 31;
        }
        if (d.mes == 4 ||d.mes == 6 ||d.mes == 9 ||d.mes == 11){
            return 30;
        }
        if (d.mes == 2){
            if (anoBissexo(d)){
                return 29;
            }
            else{
                return 28;
            }
        }
}
tData verificaData (tData d){
    if (d.mes>12){
        d.mes = 12;
    }
    else if(d.mes<1){
        d.mes=1;
    }
    if (d.dia > diasMes(d)){
        d.dia = diasMes(d);
    }
    if (d.dia < 1){
        d.dia = 1;
    }
    return d;
}
tData mudaData (tData d){
    d.dia++;
    if (d.dia > diasMes(d)){
        d.dia = 1;
        d.mes++;
        if(d.mes>12){
            d.mes = 1;
            d.ano++;
        }
    }
    return d;
}

void imprimeData(tData d){
    printf("'%02d/%02d/%d'\n", d.dia, d.mes, d.ano);
};

int main(){
    tData d1, d2;
    d1 = leData();
    d1 = verificaData(d1);
    d2 = leData();
    d2 = verificaData(d2);

    while (1)
    {
         if (d1.dia == d2.dia && d1.mes == d2.mes && d1.ano == d2.ano)
            break;
        imprimeData(d1);
        d1 = mudaData(d1);
    }

    return 0;
}
