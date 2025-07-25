# include <stdio.h>

void comparar(int vet[], int tam, int *maior, int *Smaior);

int main(){
	int vet[20] = {10, 9, 11, 3, 12, 4}, tam = 5, i;
	int maior, Smaior;
	
	printf("vetor:");
	for(i = 0; i<tam; i++){
		printf("%d ", vet[i]);
	}
	printf("\n\n");
	
	comparar(vet, tam, &maior, &Smaior);
	
	printf("maior numero: %d\n", maior);
	printf("segundo maior numero: %d", Smaior);
}
void comparar(int vet[], int tam, int *maior, int *Smaior){
	
	int i;
	*maior = vet[0];
	*Smaior = vet[1];
	
	for(i = 0; i<tam; i++){
		if(*maior < vet[i]){
		
			*Smaior = *maior;
			*maior = vet[i];
			
		}else if(*maior > vet[i] && *Smaior<vet[i]){
			
			*Smaior = vet[i];
		}
		
		
	}
}
