#include <stdio.h>

int main(){
	int i, n, nmaior = -99999999, qp = 0;
	float med, spares = 0;
	
	for(i = 1; i<=200; i++){
		printf("digite um numero: \n");
		scanf("%d", &n);
				
		if(i % 2 == 0){
			if(n>nmaior){
				nmaior = n;
			}
		}
		if(n % 2 == 0){
			qp++;
			spares += n;
		}
	}
	if(qp > 0){
		med = spares/qp;
	}else{
		printf("nenhum numero par foi calculado");
	}
	
	printf("O maior numero fornecido, de ordem par:%d \n", nmaior);
	printf("A media dos valores pares:%.2f", med);
}
