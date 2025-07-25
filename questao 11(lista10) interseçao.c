#include <stdio.h>

void intersecao(int vetA[], int vetB[], int vetC[], int *cont);

int main(){
	
	int i, vetA[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, vetB[10] = {0, 5, 10, 9, 7, 11, 4, 7, 12, 3}, vetC[20];
	int cont = 0;
	printf("vetorA: ");
	for(i=0;i<10;i++){
		printf("%d, ", vetA[i]);
	}
	printf(".\n\n");
	
	printf("vetorB: ");
	for(i=0;i<10;i++){
		printf("%d, ", vetB[i]);
	}
	printf(".\n\n");
	
	intersecao(vetA, vetB, vetC, &cont);
	
	printf("vetorC: ");
	for(i=0;i<cont;i++){
		printf("%d, ", vetC[i]);
	}
	printf(".\n\n");
	
}

void intersecao(int vetA[], int vetB[], int vetC[], int *cont){
	
	int i, j;
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(vetA[i] == vetB[j]){
				vetC[*cont] = vetB[j];
				(*cont)++;
			}
		}
	}
	
	
}
