// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

typedef struct{
    int dia, mes;
}Tdata;

typedef struct{
    char nome[20];
    Tdata aniversario;
}Tdados;

int quant(Tdados niver[], int tam, int mes){
    int i, quant = 0;
    for(i = 0; i<tam; i++){
        if(niver[i].aniversario.mes == mes){
            quant++;
        }
    }
    return quant;
}
void exibir(Tdados niver[], int tam, Tdata d1, Tdata d2){
    int i;
    for(i = 0; i<tam; i++){
        if( niver[i].aniversario.mes > d1.mes && niver[i].aniversario.mes < d2.mes){
                printf("%s; ", niver[i].nome);
        
        }else{
            if( niver[i].aniversario.mes == d1.mes || niver[i].aniversario.mes == d2.mes){
            if(niver[i].aniversario.dia > d1.dia && niver[i].aniversario.dia < d2.dia){
                 printf("%s; ", niver[i].nome);
            }
        }
        /*if(niver[i].aniversario.dia >= d1 && niver[i].aniversario.dia <= d2 && niver[i].aniversario.mes >= m1 && niver[i].aniversario.mes <= m2){
            printf("%s; ", niver[i].nome);*/
        }
    }
}
int main() {
   Tdados niver[5];
   int tam = 5;
    Tdata d1;
    Tdata d2;
    d1.dia = 7;
    d1.mes = 1;
    d2.dia = 30;
    d2.mes = 10;
    //pessoa 1
        strcpy(niver[0].nome, "caike");
        niver[0].aniversario.dia = 3;
        niver[0].aniversario.mes = 1;
    
    //pessoa2
        strcpy(niver[1].nome, "felipe");
        niver[1].aniversario.dia = 29;
        niver[1].aniversario.mes = 7;
        
    //pessoa3
        strcpy(niver[2].nome, "arthur");
        niver[2].aniversario.dia = 14;
        niver[2].aniversario.mes = 1;
        printf("%d\n", quant(niver, tam, 1));
        exibir(niver, tam, d1, d2);
    return 0;
}
