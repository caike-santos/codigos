#include <stdio.h>

int main(){
	
	int i, m;
	float n, r;
	
	printf("saiba os n primeiros termos de uma PA \n");
	printf("quantos termos voce quer: \n");
	scanf("%d", &m);
	printf("digite o primeiro termo: \n");
	scanf("%f", &n);
	printf("digite a razao: \n");
	scanf("%f", &r);
	
	for(i = 1; i<=m ; i++){
		
		printf("%.2f, ", n);
		
		n += r;
	}
	
}
