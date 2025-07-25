#include <stdio.h>

int removerElemento(int vetor[], int *tamanho, int valorParaRemover);


int main(){
	
	int numeros[20] = {10, 25, 33, 40, 58, 62};
	int valor;
	int tamanho = 6;
	int valorRetorno;
	int i;
	
	for(i=0; i<tamanho; i++){
		printf("%d, ", numeros[i]);
	}
	printf(".\n\n");
	
	printf("escolha o valor para remover: ");
	scanf("%d", &valor);
	
	
	valorRetorno = removerElemento(numeros, &tamanho, valor);
	
	for(i=0; i<tamanho; i++){
		printf("%d, ", numeros[i]);
	}
	printf(".\n\n");
	
	if(valorRetorno == 1){
		printf("Elemento removido com sucesso!");
	}else{
		printf("Elemento nao encontrado!");
	}
}
int removerElemento(int vetor[], int *tamanho, int valorParaRemover){
	
	int i;
	
	for(i=0; i<*tamanho; i++){
		
		
		if(vetor[i] == valorParaRemover){
			
			*tamanho = *tamanho - 1;
			
			for(;i<*tamanho; i++){
				vetor[i] = vetor[i+1];
			}
	
			return 1;
			
		}
	}
	return 0;
}
