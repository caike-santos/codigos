#include <stdio.h>
#include <string.h>

    typedef struct{
        int mod;
        int fabri;
    }anos;
    
    typedef struct{
        char placa[20];
        char modelo[20];
        char marca[20];
        char cor[20];
        float quilometragem;
        anos ano;
        float valor;
        char tipo[10];
    }veiculo;
    
    void exibir(veiculo estoque[], int tamanho, char m[], int a1, int a2, float valormax){
        int i;
        for(i = 0; i<tamanho; i++){
            if(strcmp(estoque[i].modelo, m) == 0 && estoque[i].ano.fabri>a1 && estoque[i].ano.fabri<a2 && estoque[i].valor <= valormax){
               
                 printf("Dados do Veículo:\n");
                 printf("Placa: %s\n", estoque[i].placa);
                 printf("Modelo: %s\n", estoque[i].modelo);
                 printf("Ano de Fabricação: %d\n", estoque[i].ano.fabri); 
                 printf("Ano do Modelo: %d\n", estoque[i].ano.mod);
                 printf("Valor: R$ %.2f\n", estoque[i].valor);
                 printf("---------------------------\n");
    
            }
        }
    }
    
    void reajuste(veiculo estoque[], int tamanho, float p){
        int i;
        for(i = 0; i<tamanho; i++){
            if(strcmp(estoque[i].tipo, "0 KM") == 0){
                estoque[i].valor *= (p/100) + 1;
                printf("Dados do Veículo com reajuste:\n");
                 printf("Placa: %s\n", estoque[i].placa);
                 printf("Modelo: %s\n", estoque[i].modelo);
                 printf("Ano de Fabricação: %d\n", estoque[i].ano.fabri); 
                 printf("Ano do Modelo: %d\n", estoque[i].ano.mod);
                 printf("Valor: R$ %.2f\n", estoque[i].valor);
                 printf("---------------------------\n");
            }
        }
    }
    
    void retirar(veiculo estoque[], int *tamanho, char placa[]){
        printf("Retirado:\n\n");
        int i;
        for(i = 0; i<*tamanho; i++){
            if(strcmp(estoque[i].placa, placa) == 0){
                int j;
                for(;i<*tamanho - 1; i++){
                    strcpy(estoque[i].placa, estoque[i+1].placa);
                    strcpy(estoque[i].marca, estoque[i+1].marca);
                    strcpy(estoque[i].modelo, estoque[i+1].modelo);
                    strcpy(estoque[i].cor, estoque[i+1].cor);
                    estoque[i].quilometragem = estoque[i+1].quilometragem;
                    estoque[i].ano.mod = estoque[i+1].ano.mod;
                    estoque[i].ano.fabri =  estoque[i+1].ano.fabri;
                    estoque[i].valor = estoque[i+1].valor;
                    strcpy(estoque[i].tipo, estoque[i+1].tipo);
                }
                *tamanho--;
            }
        }
         for(i = 0; i<*tamanho; i++){
                printf("Dados do Veículo:\n");
                 printf("Placa: %s\n", estoque[i].placa);
                 printf("Modelo: %s\n", estoque[i].modelo);
                 printf("Ano de Fabricação: %d\n", estoque[i].ano.fabri); 
                 printf("Ano do Modelo: %d\n", estoque[i].ano.mod);
                 printf("Valor: R$ %.2f\n", estoque[i].valor);
                 printf("---------------------------\n");
            
        }
    }
    int main(){
        veiculo estoque[5];
        char m[20];
        int tamanho = 5; 
        char placa[20];
        strcpy(m, "Onix");
        strcpy(placa, "MER4C02");
    strcpy(estoque[0].placa, "BRA2E19");
    strcpy(estoque[0].modelo, "Onix");
    strcpy(estoque[0].marca, "Chev");
    strcpy(estoque[0].cor, "Prata");
    estoque[0].quilometragem = 0;
    estoque[0].ano.mod = 2020;
    estoque[0].ano.fabri = 2019;
    estoque[0].valor = 68000.00;
    strcpy(estoque[0].tipo, "0 KM");

    // Veículo 2
    strcpy(estoque[1].placa, "MER4C02");
    strcpy(estoque[1].modelo, "Onix");
    strcpy(estoque[1].marca, "Chev");
    strcpy(estoque[1].cor, "Branco");
    estoque[1].quilometragem = 89430.0;
    estoque[1].ano.mod = 2018;
    estoque[1].ano.fabri = 2018;
    estoque[1].valor = 47500.00;
    strcpy(estoque[1].tipo, "usado");

    // Veículo 3
    strcpy(estoque[2].placa, "ARG2A21");
    strcpy(estoque[2].modelo, "Cronos");
    strcpy(estoque[2].marca, "Fiat");
    strcpy(estoque[2].cor, "Vermelho");
    estoque[2].quilometragem = 0;
    estoque[2].ano.mod = 2022;
    estoque[2].ano.fabri = 2021;
    estoque[2].valor = 82000.00;
    strcpy(estoque[2].tipo, "0 KM");

    // Veículo 4
    strcpy(estoque[3].placa, "EUA1B34");
    strcpy(estoque[3].modelo, "Ka");
    strcpy(estoque[3].marca, "Ford");
    strcpy(estoque[3].cor, "Preto");
    estoque[3].quilometragem = 105000.8;
    estoque[3].ano.mod = 2016;
    estoque[3].ano.fabri = 2015;
    estoque[3].valor = 41000.00;
    strcpy(estoque[3].tipo, "usado");

    // Veículo 5
    strcpy(estoque[4].placa, "JAP3C10");
    strcpy(estoque[4].modelo, "Corolla");
    strcpy(estoque[4].marca, "Toyota");
    strcpy(estoque[4].cor, "Cinza");
    estoque[4].quilometragem = 9500.0;
    estoque[4].ano.mod = 2023;
    estoque[4].ano.fabri = 2023;
    estoque[4].valor = 145000.00;
    strcpy(estoque[4].tipo, "usado");
    
    exibir(estoque, tamanho, m, 2015, 2022, 70000);
    reajuste(estoque, tamanho, 10);
    retirar(estoque, &tamanho, placa);
    
    }
    