#include <stdio.h>

void encontar(int vet[], int tamanho, int *maior, int *segundoMaior);

int main(){
	int i, vet[20] = {4, 5, 6, 9, 10, 4, 8, 50, 2, 6, 70, 5, 20, 75}, tamanho = 14, maior = 4, segundo = 5;
	
	for(i=0;i<tamanho;i++){
		
		printf("%d, ", vet[i]);
	}
	printf(".\n\n");
	
	encontar(vet, tamanho, &maior, &segundo);
	
	printf("%d\n\n", maior);
	
		printf("%d\n\n", segundo);
}

void encontar(int vet[], int tamanho, int *maior, int *segundoMaior){
	
	int i;
	
	for(i=0; i<tamanho; i++){
		if(vet[i]>*maior){
		
			*maior = vet[i];
			
		}
	}
	
		for(i=0; i<tamanho; i++){
			if(vet[i] != *maior && vet[i]>*segundoMaior){
				*segundoMaior = vet[i];
			}
		}
}


