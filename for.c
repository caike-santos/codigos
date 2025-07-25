#include <stdio.h>

int main(){
	
	float n;
	
	printf("digite um numero e descubra todos os multiplos de 5 menor que 1000 desse numero: ");
	scanf("%f", &n);
	
	for(;n<1000 && n>-1000; n*=5)
	{
		printf("%.3f ", n);
	}
	
}
