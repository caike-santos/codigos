#include <stdio.h>

int main(){
	
	int q, i, n, spar = 0, pinp = 1;
	
	printf("entre com varios numeros inteiros e positivos e imprima o produto dos numeros impares e a soma dos numeros pares. \n");
	printf("digite a quantidade de numeros que sera inserido: \n");
	scanf("%d", &q);
	
	for(i = 1; i<=q; i++){
		
		printf("digite o numero: \n");
		scanf("%d", &n);
		
		if(n<0){
			printf("numero invalido");
			return 1;
		}else{
			if(n % 2 == 0){
				spar += n;
			}else{
				pinp *= n;
			}
		}
		
	}
	
	printf("soma dos pares:%d \n", spar);
	printf("produto dos impares:%d", pinp);
}
