#include<stdio.h>

int main(){
	char nome[50];
	//printf("digite seu nome:");
	//scanf("%49[^\n]s", nome);
	//fflush(stdin);
	
	//printf("seu nome: %s\n", nome);
	
	fgets(nome, 49, stdin);
	
	puts(nome);
}
