#include <stdio.h>

int main(){
	 int n, y, i, r = 0;
	 
	 printf("escolha dois numeros inteiros positivos n e y e receba todos os multiplos de y inferiores a n \n");
	 printf("digite o y: \n");
	 scanf("%d", &y);
	 printf("digite o n: \n");
	 scanf("%d", &n);
	 
	 for(i = 0; r<n; i++, r = i*y){
	 	
	 	printf("%d, ", r);
	 }
	
	 
}
