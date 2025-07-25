#include <stdio.h>

int main(){
	int q, i, n, nmaior = -1000000, nmenor = 1000000;
	
	printf("digite a quantidade de numeros que sera inserido: \n");
	scanf("%d", &q);

	
	for(i = 0; i < q; i++){
		printf("digite o numero: \n");
	    scanf("%d", &n);
	    
	    if(n < nmenor){
	    	nmenor = n;
		}
		if(n > nmaior){
			nmaior = n;
		}
	}
	
	printf("%d, %d.", nmaior, nmenor);
}
