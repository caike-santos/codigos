#include <stdio.h>

void soma(int vet1[], int vet2[], int vet3[], int tamanho);

int main(){
	
	int numero1[20] = {9, 1, 3, 6, 4, 7, 2}, numero2[20] = {1, 5, 2, 7, 0, 4, 6}, numero3[20], tamanho = 7, i;
	
		printf("numero1:");
	for(i = 0; i<tamanho; i++){
		printf("%d", numero1[i]);
	}
	printf("\n\n");
	
	printf("numero2:");
	for(i = 0; i<tamanho; i++){
		printf("%d", numero2[i]);
	}
	printf("\n\n");
	
	soma(numero1, numero2, numero3, tamanho);
}

void soma(int vet1[], int vet2[], int vet3[], int tamanho){
	
	int i, j, vai_um, tamanhofinal = tamanho;
	
	for(i = tamanho - 1; i>=0; i--){
		
		vet3[i] = vet1[i] + vet2[i];
		
	    if(i == 0 && vet3[i] > 9){
			
			 vai_um = vet3[i] / 10;
			 
			 vet3[i] = vet3[i] % 10;
			
			for(j = tamanho - 1; j>=0; j--){
				vet3[j + 1] = vet3[j];
			}
			vet3[0] = vai_um;
			tamanhofinal++;
		}
		
		if(vet3[i] > 9){
			vet3[i] = vet3[i] % 10;
			vet1[i-1]++;
		}
	}

	
	printf("resultado:");
	for(i = 0; i<tamanhofinal; i++){
		printf("%d", vet3[i]);
	}
	printf("\n\n");
}
