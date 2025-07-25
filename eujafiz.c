#include <stdio.h>

int numOcorrencias(int valor, int vetor[]);

int numOcorrencias(int valor, int vetor[]){
	
	int i, quant = 0;
	
	for(i=0;i<10;i++){
		
		if(vetor[i] == valor){
			quant++;
		}
	}
	
	return quant;
}

int main(void){
	int vetor[] = {1, 2, 1, 1, 3, 2, 2, 3, 2, 1};
	int n;
	
	printf("digite o valor n: \n");
	scanf("%d", &n);
	
	printf("ocorencias: %d", numOcorrencias(n, vetor));
}
