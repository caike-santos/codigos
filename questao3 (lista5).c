#include <stdio.h>

int main(){
	
	int n, i;
	
	printf("descubra todos os divisores de um número, \n");
	printf("digite o numero: \n");
	scanf("%d", &n);
	
		if(n == 0){
		printf("todos os inteiros diferentes de 0");
		return 1;
	}
	if(n<0){
		n *= -1;
	}
		for(i = 1;i<=n; i++){
			
	if(n%i == 0){
		printf("%d, %d, ", i, -i);
	}
}	
	}
		
	




