#include <stdio.h>

int NOcorrencias(int x, int vet[], int tamanho){
	int i, quant = 0;
	
	for(i = 0; i<tamanho; i++){
		
		
		if(vet[i] == x){
			quant++;
		}
	}
	return quant;
}

int main(){
	
	int x, i, tamanho;
	
	printf("tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	int vet[tamanho];
	
	for(i = 0; i<tamanho; i++){
		
		printf("escolha o numero:\n ");
		scanf("%d", &vet[i]);
		
	}
	
	printf("escolha x:\n ");
	scanf("%d", &x);
	
	printf("%d", NOcorrencias(x, vet, tamanho));
}
