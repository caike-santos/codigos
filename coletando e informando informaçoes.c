#include <stdio.h>
#define texto "insira seus dados."
#define texto1 "exibindo resultados."

int main(){
int idade;
float altura;
char nome[50], genero;

printf("%s\n\n", texto);
printf("digite sua idade: \n");
scanf("%d", &idade);
printf("digite sua altura: \n");
scanf("%f", &altura);
printf("digite seu nome: \n");
scanf("%s", &nome);
printf("digite seu genero M(masculino) e F(feminino): \n");
scanf("%s", &genero);

printf("%s\n", texto1);
printf("idade:%d\n", idade);
printf("altura:%.2f\n", altura);
printf("nome:%s\n", nome);
printf("genero:%c", genero);
}

