#include <stdio.h>

int verificar(int n);

int main(){
	
	int n;
	
	printf("escolha um valor: ");
	scanf("%d", &n);
	
	printf("n = %d                ", n);
	
	if(verificar(n)){
		printf("estao ordenados");
	}else{
		printf("nao estao ordenados");
		
	}
}
int verificar(int n){
	
	int resto, k, d=10, m = n;
	
	while(m>9){
		
		m = n/d;
		resto = n % d;
		k = m % d;
		if(k == 0){
			k = m;
		}
		n = m;
		
		if(resto<k){
			return 0;
		}
	}
	return 1;
}
