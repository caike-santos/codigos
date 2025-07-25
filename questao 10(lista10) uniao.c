#include <stdio.h>

void uniao(int vetA[], int vetB[], int vetC[], int tamanhoA, int tamanhoB);

int main(){
	
	int laoA[5] = {1,2,3,4,5,}, laoB[5] = {6,7,8,9,10};
	int laoC[10];
	int i;
	
		printf("vetorA:");
	for(i = 0; i<5; i++){
		printf("%d, ", laoA[i]);
	}
	printf(".\n\n");
	
	printf("vetorB:");
		for(i = 0; i<5; i++){
		printf("%d, ", laoB[i]);
	}
	printf(".\n\n");
	
	uniao(laoA, laoB, laoC, 5, 5);
	
		printf("vetorC:");
	for(i = 0; i<10; i++){
		printf("%d, ", laoC[i]);
	}
	printf(".\n\n");
}

void uniao(int vetA[], int vetB[], int vetC[], int tamanhoA, int tamanhoB){
	
	int i, j;
	
	for(i=0, j=0;i<tamanhoA;i++, j++){
		vetC[j] = vetA[i];
		
	}

		
	for(i=0;i<tamanhoB;i++, j++){
		vetC[j] = vetB[i];
		
	}
	
	
}
