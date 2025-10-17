
#include <stdio.h>
#include <string.h>

typedef struct{
    int matricula;
    char nome[20];
    char genero;
    float salario;
}dados;

void trocar(dados fun[], int tam, char g){
    dados temp;
    int i, mat;
    char n[20], gen;
    float sal;
    for(i = 0; i<tam-1; i++){
        if(fun[i].genero == 'F' && fun[i+1].genero == 'M'){
            
            temp = fun[i];
            
            fun[i] = fun[i+1];
            
            fun[i+1] = temp;
            
            i = 0;
        }
    }
}
int main() {
  dados funcionarios[6] = {
        {101, "Ana Silva", 'F', 5500.00},
        {102, "Bruno Costa", 'M', 6200.50},
        {103, "Carla Lima", 'F', 4800.75},
        {104, "Daniel Souza", 'M', 7100.00},
        {105, "Elisa Rocha", 'F', 5900.25},
        {106, "Carlos Riberto", 'M', 8552.45}
    };
   char g = 'M';
   int tam = 6, i;
   
   for(i = 0; i<tam; i++){
       printf("%d, %s, %c, %.2f\n", funcionarios[i].matricula, funcionarios[i].nome, funcionarios[i].genero, funcionarios[i].salario);
   }
   printf("------------------------------\n");
   trocar(funcionarios, tam, g);
    for(i = 0; i<tam; i++){
       printf("%d, %s, %c, %.2f\n", funcionarios[i].matricula, funcionarios[i].nome, funcionarios[i].genero, funcionarios[i].salario);
   }
    return 0;
}
