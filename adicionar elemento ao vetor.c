#include <stdio.h>



int adicionarElemento(int vetor[], int *tamanho, int capacidade, int valorParaAdicionar);

int main(){
	#define CAPACIDADE 3
	
	int lao[CAPACIDADE] = {6, 5, 4};
	int tamanho = 3;
	int valor;
	int i;
	int valorRetorno;
	
	for(i=0;i<tamanho;i++){
		
		printf("%d, ", lao[i]);
	}
	printf(".\n\n");
	
	printf("valor para ser adicionado: ");
	scanf("%d", &valor);
	
	valorRetorno = adicionarElemento(lao, &tamanho, CAPACIDADE, valor);
	
		for(i=0;i<tamanho;i++){
		
		printf("%d, ", lao[i]);
	}
	printf(".\n\n");
	
		if(valorRetorno == 1){
		printf("Elemento adicionado com sucesso!");
	}else{
		printf("Capacidade lotada!");
	}
}
int adicionarElemento(int vetor[], int *tamanho, int capacidade, int valorParaAdicionar){
	
	if(*tamanho == capacidade){
		return 0;
	}else{
		
		vetor[*tamanho] = valorParaAdicionar;
		(*tamanho)++;
		
		return 1;
	}
	
}
