#include <stdio.h>

void comparar(float vet[], int tamanho, float *maior, float *menor, float n);

int main(){
	
	float vet[20] = {1, 4, 7, 5, 2}, maior, menor, n; 
	int tamanho = 5, i;
	
	printf("escolha um numero n: ");
	scanf("%f", &n);
	
	printf("vetor comparado: ");
	for(i = 0; i<tamanho; i++){
	    printf("%.2f ", vet[i]);
	}
	printf("\n\n");
	
	comparar(vet, tamanho, &maior, &menor, n);
	
	printf("o menor valor do conjunto dos numeros maiores que n: %.2f\n\n", menor);
	
	printf("o maior valor do conjunto dos numeros menores que n: %.2f\n\n", maior);
}
void comparar(float vet[], int tamanho, float *maior, float *menor, float n){
	
	int i, contmaior = 0, contmenor = 0;
	float vetmaior[tamanho], vetmenor[tamanho];
	
	for(i = 0; i<tamanho; i++){
		if(vet[i] > n){
			vetmaior[contmaior] = vet[i];
			contmaior++;
		}else if(vet[i] < n){
			vetmenor[contmenor] = vet[i];
			contmenor++;
		}
	}
	
	for(i = 1; i < contmaior; i++){
		*menor = vetmaior[0];
		
		if(*menor > vetmaior[i]){
			*menor = vetmaior[i];
		}
	}
	
	for(i = 1; i < contmenor; i++){
		*maior = vetmenor[0];
		
		if(*maior < vetmenor[i]){
			*maior = vetmenor[i];
		}
	}
}
