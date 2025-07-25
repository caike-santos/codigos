#include <stdio.h>

int main(){
	
	int n;
	
	printf("digite um numero inteiro e saiba todos os multiplos de 2 menor que 100 desse numero: ");
	scanf("%d", &n);
	
	while(n<100){
		printf("%d ", n);
		n*=2;
	}
}
