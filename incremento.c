#include <stdio.h>
int main(){
	int dado = 14;
	
	dado++;
	printf("numero mais um: %d \n", dado);
	
	dado--;
	printf("numero menos um: %d \n", dado);
	
	dado += 7;
	printf("numero mais 7: %d \n", dado);
	
	dado -= 7;
	printf("numero menos 7: %d \n", dado);
	
	dado *=7;
	printf("numero vezes 7: %d \n", dado);

	dado /=7;
	printf("numero dividido por 7: %d \n", dado);
	
	dado %=7;
	printf("resto do numero dividido por 7: %d", dado);
	
	
}
