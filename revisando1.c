#include <stdio.h>

int ehPrimo(int numero);

int main(){
	int x, resultado;
	
	printf("escolha um numero: \n\n");
	scanf("%d", &x);
	
	resultado = ehPrimo(x);
	
	if(resultado){
		printf("O numero X e primo.");
	}else{
		printf("O numero X nao e primo.");
	}
}
int ehPrimo(int numero){
	
	int i;
	
	if(numero <= 0 || numero == 1){
		return 0;
	}
	
	
	for(i = 2; i<=(numero/2); i++){
		
		if(numero % i == 0){
			return 0;
		}
	}
	
	return 1;
}
