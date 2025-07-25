#include <stdio.h>

void contar(int vet[], int tamanho);

int main(){
	
	int vetor[] = {3, 5, 1, 3, 2, 5, 7, 3, 4, 7, 6, 1};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor = {3,5,1,3,2,5,7,3,4,7,6,1}\n\n");

    contar(vetor, tamanho);

    return 0;
}
void contar(int vet[], int tamanho){
	
	int lao[tamanho], i, j;
	
	for(i=0; i<tamanho; i++){
		
		lao[i] = 0;
	}
		printf("saida:\n");
	
	for(i=0; i<tamanho; i++){
		
		if(lao[i] == -1){
			continue;
		}
		
		int contagem = 1;
		
		for(j = i+1; j<tamanho; j++){
			
			if(vet[i] == vet[j]){
				contagem++;
				lao[j] = -1;
			}
			
		}
		if(contagem == 1){
				printf("%d: %d vez\n", vet[i], contagem);
			}else {
				printf("%d: %d vezes\n", vet[i], contagem);
			}
	}
}
