#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int tamanho = 300;

void preencher(int vet[], int tamanho);
void separar(int vet[], int par[], int impar[], int *tamanhopar, int *tamanhoimpar );
void exibir(int vet[], int tamanho);



int main(){
	
srand(time(NULL));
	
int laopar[tamanho], laoimpar[tamanho], p, i;
	int lao[tamanho];
	preencher(lao, tamanho);
	
	
	
	separar(lao, laopar, laoimpar, &p, &i);
	printf("vetor principal: ");
	exibir(lao, tamanho);
	printf("vetor de pares: ");
	exibir(laopar, p);
		printf("vetor de impares: ");
	exibir(laoimpar, i);
	
	return 0;
}

void preencher(int vet[], int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		
		vet[i] = rand() % 101;
	}
}

void separar(int vet[], int par[], int impar[], int *tamanhopar, int *tamanhoimpar ){
	int i;
	*tamanhopar = 0;
	*tamanhoimpar = 0;
	for(i=0;i<tamanho;i++){
		
		if(vet[i] % 2 == 0){
		par[(*tamanhopar)]=vet[i];
			(*tamanhopar)++;
		}else{
			impar[(*tamanhoimpar)]=vet[i];
			(*tamanhoimpar)++;
		}
	}
}
	
void exibir(int vet[], int tamanho){
		int i;
	for(i=0; i<tamanho; i++){
		
		printf("%d, ", vet[i]);
	}
		printf("\n-----------------------------------------------------------=------------------------------------------------------------");
	printf("\n\n\n");

}

