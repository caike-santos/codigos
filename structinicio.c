// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
  typedef struct{
         char nome[10];
         float av1;
         float av2;
         float media;
         char resul[20];
     }turma;
     
void exibir(turma alunos[], int tamanho){
    int i;
    for(i=0; i<tamanho; i++){
        printf(" Nome: %s;\n Av1: %.2f;\n Av2: %.2f;\n Media: %.2f;\n Situacao: %s; \n --------------\n", alunos[i].nome, alunos[i].av1, alunos[i].av2, alunos[i].media, alunos[i].resul);
    }
}

void media(turma alunos[], int tamanho){
    int i;
    for(i = 0; i<tamanho; i++){
        alunos[i].media = (alunos[i].av1 + alunos[i].av2)/2;
        if(alunos[i].media>=6){
            strcpy(alunos[i].resul, "Aprovado");
        }else{
            if(alunos[i].media>=4){
            strcpy(alunos[i].resul, "em AVF");
        }else{
            strcpy(alunos[i].resul, "Reprovado");
        }
    }
}
}
void situaçao(turma alunos[], int tamanho, int n){
    int i;
    if(n == 1){
         printf("Alunos aprovados: ");
             for(i = 0; i<tamanho; i++){
              if(alunos[i].media>=6){
               printf("%s; ", alunos[i].nome);
            }
    }
 }else{
     if(n == 2){
          printf("Alunos reprovados: ");
         for(i = 0; i<tamanho; i++){
              if(alunos[i].media<=4){
               printf("%s; ", alunos[i].nome);
            }
     }
 }else{
     if(n == 3){
          printf("Alunos em AVF: ");
     for(i = 0; i<tamanho; i++){
              if(alunos[i].media>4 && alunos[i].media<6){
               printf("%s; ", alunos[i].nome);
            }
 }
     }else{
         printf("Numero invalido");
     }
}
}
}
int main() {
   
     
     turma alunos[3];
     
     strcpy(alunos[0].nome, "alice");
     alunos[0].av1 = 8;
     alunos[0].av2 = 5.7;
     
     strcpy(alunos[1].nome, "julio");
     alunos[1].av1 = 4.9;
     alunos[1].av2 = 3.9;
     
     strcpy(alunos[2].nome, "caio"); 
     alunos[2].av1 = 5.4;
     alunos[2].av2 = 4.7;
    
    media(alunos, 3);
    exibir(alunos, 3);
    situaçao(alunos, 3, 3);
    return 0;
}




