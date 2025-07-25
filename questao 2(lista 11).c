#include <stdio.h>

int estarcontido(int vet1[], int vet2[], int tamanhoA, int tamanhoB);
int contido(int vetA[], int vetB[], int tamanhoA, int tamanhoB);

int main(){
	
	int vetA[] = {1, 2, 3, 4, 5, 6};
    int vetB[] = {2, 4, 6};
    int vetC[] = {7, 8, 9};
    int vetD[] = {1, 2, 3};
    
    printf("Resultado A e B (esperado 2): %d\n", contido(vetA, vetB, 6, 3));
    printf("Resultado B e A (esperado 1): %d\n", contido(vetB, vetA, 3, 6));
    printf("Resultado A e C (esperado 0): %d\n", contido(vetA, vetC, 6, 3));
    printf("Resultado A e D (esperado 2): %d\n", contido(vetA, vetD, 6, 3));

    return 0;
}


int estarcontido(int vet1[], int vet2[], int tamanhoA, int tamanhoB){
	int i, j;
	
	for(i=0;i<tamanhoA;i++){
		int cond = 0;
		
		for(j=0;j<tamanhoB;j++){
			if(vet1[i] == vet2[j]){
				cond = 1;
				break;
			}
		}
		
			if(cond == 0){
		return 0;
	}
	
	}
	return 1;

}

int contido(int vetA[], int vetB[], int tamanhoA, int tamanhoB){
	int i, a_esta_b, b_esta_a;
	
	a_esta_b = estarcontido(vetA, vetB, tamanhoA, tamanhoB);
	b_esta_a = estarcontido(vetB, vetA, tamanhoB, tamanhoA);
	
	if(a_esta_b && b_esta_a){
		return 3;
	}
	
	if(a_esta_b){
		return 1;
	}
	
	if(b_esta_a){
		return 2;
	}
	
	return 0;
}
