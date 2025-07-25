#include <stdio.h>

int main(){
	
	int n, i, m = 1;
	
	printf("exiba os N primeiros termos da seguinte serie: 1,2,4,8,16,32,... \n");
	printf("digite a quantidade de termos: \n");
	scanf("%d", &n);
	
	for(i = 1; i<=n; i++){
		
		printf("%d,", m);
		
		m *= 2;
	}
}
