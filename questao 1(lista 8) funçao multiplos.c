#include <stdio.h>

void ExibirMultiplos(int n, int a, int b){
	int valor, i;
	
	for(i = 1; i<=b; i++){
		valor = n*i;
		if(valor>=a && valor<=b){
			printf("%d, ", valor);
		}
	}
}

int main(){
	
	int n, a, b;
	
	printf("escolha n:");
	scanf("%d", &n);
	printf("escolha a:");
	scanf("%d", &a);
	printf("escolha b:");
	scanf("%d", &b);
	
	ExibirMultiplos(n, a, b);
}
