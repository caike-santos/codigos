#include <stdio.h>

int main(){
	
	int n;
	
	printf("digite um numero inteiro e descubra os multiplos de 3 menor que 200 desse numero: ");
	scanf("%d", &n);
	
	do{
	
	 printf("%d ", n);
	n*=3;

	}
	
	while(n<200 && n>-200);
}
