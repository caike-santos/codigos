// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
typedef struct{
    char nome[20], genero;
    int idade;
}dados;

int ordem(dados p[], int tam){
    int i, j;
    for(i = 0; i<tam-1; i++){
        if(p[i].idade==p[i+1].idade){
           for(j=0; j<strlen(p[i].nome) || j<strlen(p[i+1].nome); j++){
               if(p[i].nome[j] > p[i+1].nome[j]){
                   return 0;
               }else {if(p[i].nome[j] != p[i+1].nome[j]){
                   break;
               }
               }
           }
        }else{
            if(p[i].idade > p[i+1].idade){
                return 0;
            }
        }
    }
    return 1;
}

int main() {
  dados pessoa[5] = {{"Caike", 'M', 2}, {"Mayara", 'F', 3}, {"Mario", 'M', 3}, {"Cristiane", 'F', 9}, {"Ana", 'F', 10}};
  
  int i, tam = 5;
  
  for(i = 0; i<tam; i++){
       printf("%s, %c, %d\n", pessoa[i].nome, pessoa[i].genero, pessoa[i].idade);
   }
   
   printf("------------------------\n");
   if(ordem(pessoa, tam)){
       printf("Ordenado");
   }else{
       printf("Nao ordenado");
   }
   
   

    return 0;
}