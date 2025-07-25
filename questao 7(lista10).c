#include <stdio.h>
const int tamanho = 10;
void preencher(int vet[], int tamanho);
void exibir(int vet[], int tamanho);
void remover(int vet[], int novovet[], int tamanho, int alvo, int *j);

int main(){
	
	srand(time(NULL));
	
	int lao[tamanho], novolao[tamanho], a, j;
	
	preencher(lao, tamanho);
	
	exibir(lao, tamanho);
	
	printf("escolha o valor para remover: ");
	scanf("%d", &a);
	
	remover(lao, novolao, tamanho, a, &j);
	
	exibir(novolao, j);
}

void remover(int vet[], int novovet[], int tamanho, int alvo, int *j){
	int i;
	*j = 0;
	for(i=0;i<tamanho;i++){
		
		if(vet[i]!=alvo){
			 novovet[(*j)] = vet[i];
			 (*j)++;
			
		}
	}
}


void exibir(int vet[], int tamanho){
	
	int i;
	for(i=0;i<tamanho;i++){
		printf("%d, ", vet[i]);
	}
	printf(".\n\n");
}
void preencher(int vet[], int tamanho){
	
	int i;
	for(i=0;i<tamanho;i++){
		vet[i] = rand() % 11;
	}
}
