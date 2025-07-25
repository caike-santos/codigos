#include <stdio.h>

int main(){
	
	float nota;
	
	printf("saiba se voce esta aprovado, reprovado ou em recuperaçao \n\n");
	
	printf("insira a sua nota: \n");
	scanf("%f", &nota);
	
	if(nota >= 6){
	
	printf("aprovado");
	
	}
	
		else{
			
		if(nota < 4){
			printf("reprovado");
		}
		
		else{ printf("recuperacao");
		}
		}
		
}
