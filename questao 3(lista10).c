#include <stdio.h>

#include <locale.h>


void LerVetor(float vet[], int tamanho);





int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, tamanho;
	
	printf("qual a quantidade de n�meros? \n");
	scanf("%d", &tamanho);
	
	float lao[tamanho];
	
	for(i=0;i<tamanho;i++){
		
		printf("escolha o n�mero: \n");
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
		printf("sequ�ncia de n�meros n�o � crescente!");
	}else{
		printf("sequ�ncia de n�meros � crescente!");
	}
	

}
