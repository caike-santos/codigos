#include <stdio.h>

int main(){
	int n, a, b, i, soma, j;
	
	printf("escolha um numero inteiro menor ou igual a 18 e receba os numeros no intervalo de 1 a 99 cujos algarismos somem esse numer escolhido \n\n");
	printf("digite o numero: \n");
	scanf("%d", &n);
	
	if(n>18){
		printf("numero invalido");
	}
	else{
		if(n<1){
			printf("nao tem nenhum algarismo dentro do intervalo que somado seja igual a esse numero \n");
		}
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			
				if(i + j == n){
					printf("%d%d, ", i, j);
				}
			}
			
			
	}
			
			
	}
	
}
	
	

