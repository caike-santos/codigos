#include <stdio.h>

int main(){
	int i, n, m = 1, k=2;
	
	printf("exiba os N primeiros termos da seguinte serie: 1,2,8,64,1024,... \n");
	printf("digite a quantidade de termos: \n");
	scanf("%d", &n);
	
	for(i = 1; i<=n; i++){
		
	printf("%d,", m);
	
	m *= k;
	k *= 2;	
	}
}
