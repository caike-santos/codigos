#include <stdio.h>

int main(){
	int i, n, p, pt = 0; 
	float m, nota, k, j = 0;
	
	printf("digite a quantidade de elementos: \n");
	scanf("%d", &n);
	
	for(i = 1;i<=n;i++){
		printf("digite a nota: \n");
		scanf("%f", &nota);
		printf("digite o peso: \n");
		scanf("%d", &p);
		
		pt += p;
		k = p*nota;
		j += k;
	}
	m = j/pt;
	printf("media ponderada:%.2f", m);
}
