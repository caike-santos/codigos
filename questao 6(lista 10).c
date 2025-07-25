#include <stdio.h>
const int tamanho = 10;
void preencher(float vet[], int tamanho);
void trocar(float vet[], int tamanho, int a, int b);
void exibir(float vet[], int tamanho);

int main(){
	
	srand(time(NULL));
	int a, b;
	float lao[tamanho];
	
	preencher(lao, tamanho);
	
	printf("vetor antes da troca: ");
	exibir(lao, tamanho);
	
	printf("escolha a: ");
	scanf("%d", &a);
	
	printf("escolha b: ");
	scanf("%d", &b);

	trocar(lao, tamanho, a, b);
	
	printf("vetor depois da troca: ");
	exibir(lao, tamanho);
	
	return 0;
}


void exibir(float vet[], int tamanho){
	
	int i;
	
	for(i=0;i<tamanho;i++){
		printf("%.2f, ", vet[i]);
	}
		printf("\n\n");
}

void trocar(float vet[], int tamanho, int a, int b){
	
	int i;
	
	for(i=0;i<tamanho;i++){
		if(vet[i] == a){
			vet[i] = b;
		}
	}
}
void preencher(float vet[], int tamanho){
	
	int i;
	
	for(i=0;i<tamanho;i++){
		
		vet[i] = rand() % 51;
	}
}
