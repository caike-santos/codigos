#include <stdio.h>
const int tamanho = 50;

void Preencher(int vet[]);

void Exibir(int vet[]);

int main(){
	int lao[tamanho];
	
	Preencher(lao);
	
	Exibir(lao);
	
	return 0;
}



void Preencher(int vet[]){

int i, v = 1, j;


for(i=0, j=1;i<tamanho;i++){
	
	vet[i] = j;
	j += v;
	v++;
	
}
}

void Exibir(int vet[]){
	
	int i;
	
	for(i=0;i<tamanho;i++){
		printf("%d, ", vet[i]);
	}
}


