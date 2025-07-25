#include <stdio.h>

int main(){
	
	int n;
	
	printf("Dado um numero inteiro receba os numeros pares positivos iguais ou inferiores a esse numero \n");
	printf("digite o numero: ");
	scanf("%d", &n);
	
	if(n<0){
		printf("nao possui numeros pares positivos inferiores ou igual a esse numero");
		return 1;
	}
	if(n %2 == 0){
		for(;n >= 0;n -= 2){
			printf("%d,", n);
		}
		
	}else{
		for(n -= 1;n >= 0; n -= 2){
			printf("%d,", n);
		}
	}
	
	
}
