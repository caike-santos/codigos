#include <stdio.h>

void alterarValores(int vetor[], int tamanho, int valora, int valorb);

void prencherAleatorio (int vetor[], int tamanho, int limite)

void exibir (int vetor[], int tamanho);

void main(){
	int vetor[20];
	int valor1, valor2;
	preencherAleatorio (vetor, 20, 10);
	printf("Entre com o valor a ser alterado: ")
	scanf("%d", &valo)
	exibir (vetor, 20);
}
void alterarValores(int vetor[], int tamanho, int valora, int valorb){
	for (i=0; i<tamanho;i++){
		if(vertor[i] == valora){
			vetor[i] = valorb;
		}
	}
}


