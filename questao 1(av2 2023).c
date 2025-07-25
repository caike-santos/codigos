#include <stdio.h>

int aproximado(float numero);

int main(){
	
	float n;
	
	printf("digite um numero para ser aproximado: \n");
	scanf("%f", &n);
	
	printf("n = %.2f                       ", n);
	printf("resposta: %d", aproximado(n));
}
int aproximado(float numero){
	
	if(numero<0){
			return numero - 0.5;
	}else{
			return numero + 0.5;
	}

}
