// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

typedef struct{
    int codigo;
    char nome[50];
    int credito;
}disciplinas; 
typedef struct{
   int codigo, semestre, ano;
   float media;
}aluno;

void exibir(aluno dados[], disciplinas info[], int tamal, int tamdis){
    int i, j, divisor = 0 ;
    float soma = 0, cr;
    
    for(i = 0; i<tamal; i++){
        for(j = 0; j<tamdis; j++){
            if(dados[i].codigo == info[j].codigo){
                 soma += (dados[i].media*info[j].credito);
                 divisor += info[j].credito;
                 break;
            }
        }
       
    }
    
    cr = soma/divisor;
    
    for(i = 0; i<tamal; i++){
         for(j = 0; j<tamdis; j++){
            if(dados[i].codigo == info[j].codigo){
                  printf("%s (%d)          %.2f\n", info[j].nome, info[j].codigo, dados[i].media);
            }
        }
      
    }
    printf("\nCoeficiente de rendimento: %.2f", cr);
}

int main() {
  
   disciplinas disciplinas[] = {
        {101, "Calculo I", 6},
        {102, "Programacao Estruturada", 6},
        {201, "Fisica I", 4},
        {202, "Algebra Linear", 4},
        {301, "Estrutura de Dados", 4}
    };

    
    aluno historico_do_aluno[] = {
        {101, 1, 2024, 8.5}, 
        {102, 1, 2024, 9.0}, 
        {201, 2, 2024, 7.0} 
    };
   
   exibir(historico_do_aluno, disciplinas, 3, 5);

    return 0;
}