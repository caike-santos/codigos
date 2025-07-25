#include <stdio.h>

#include <locale.h>


void LerVetor(float vet[], int tamanho);





int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, tamanho;
	
	printf("qual a quantidade de números? \n");
	scanf("%d", &tamanho);
	
	float lao[tamanho];
	
	for(i=0;i<tamanho;i++){
		
		printf("escolha o número: \n");
		scanf("%f", &lao[i]);
	}
	
	LerVetor(lao, tamanho);
	/*for(i=0;i<tamanho;i++){
		printf("%d, ", lao[i]);
	}*/
}

void LerVetor(float vet[], int tamanho){
	setlocale(LC_ALL, "Portuguese");
	int i, j, cont=0;
	
	for(i=0, j=1;j<tamanho;i++, j++){
	
	if(vet[i]>vet[j]){
		
		cont++;
	}	
	}
	if(cont>0){
		printf("sequência de números não é crescente!");
	}else{
		printf("sequência de números é crescente!");
	}
	

}
