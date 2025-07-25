#include <stdio.h>


void inserir(int vet[], int *tamanhonovo, int valor);

int main(){
	int lao[11] = {0, 1, 2, 3, 5, 6, 7, 8, 9, 10}, i, a;
	int tamanhonovo = 10;
	
	for(i = 0; i<10; i++){
		printf("%d, ", lao[i]);
	}
	printf("\n\n");
	
	printf("escolha um numero para ser inserido: ");
	scanf("%d", &a);
	
	inserir(lao, &tamanhonovo, a);
	
	for(i = 0; i<tamanhonovo; i++){
		printf("%d, ", lao[i]);
	}
	printf("\n\n");
	
	
	return 0;
}



void inserir(int vet[], int *tamanhonovo, int valor){
	int i, pos = 0;
	
	while(pos<*tamanhonovo && vet[pos]<valor){
		pos++;
	}
	
	for(i = *tamanhonovo; i>pos; i--){
		
		vet[i] = vet[i - 1];
	}
	
	vet[pos] = valor;
	
	(*tamanhonovo)++;
	
	
}
