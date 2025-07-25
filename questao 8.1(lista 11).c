#include <stdio.h>

void contar(int vet[], int tamanho);

int main(){
	
	int vet[20] = {3,5,1,3,2,5,7,3,4,7,6,1}, tamanho = 12;
	
	contar(vet, tamanho);
}
void contar(int vet[], int tamanho){
	
	int lao[tamanho], i, j;
	
	for(i=0; i<tamanho; i++){
		
		lao[i] = 0;
	}
	
	for(i=0; i<tamanho; i++){
		
		int contagem = 1;
		
		if(lao[i] == -1){
			continue;
		}
		
		printf("saida:\n")
		
		for(j = i+1; i<tamanho; i++){
			
			if(vet[i] == vet[j]){
				contagem++;
				lao[j] = -1;
			}
			
			if(contagem == 1){
				printf("%d: %d vez\n", vet[i], contagem);
			}else {
				printf("%d: %d vezes\n", vet[i], contagem);
			}
		}
	}
}
