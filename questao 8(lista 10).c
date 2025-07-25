#include <stdio.h>
#include <locale.h>
const int tamanho = 10;

int posicao(int vet[], int tamanho, int alvo);

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int lao[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, a, i;
	
	for(i=0; i<tamanho; i++){
		printf("%d, ", lao[i]);
	}
	printf("\n\n");
	
	printf("encontre a posiçõo do número: ");
	scanf("%d", &a);
	
	printf("posição: %d", posicao(lao, tamanho, a));
	
return 0;
}
int posicao(int vet[], int tamanho, int alvo){
	
	int i;
	
	for(i=0; i<tamanho; i++){
		if(vet[i] >= alvo){
			return i;
		}
	}
}
