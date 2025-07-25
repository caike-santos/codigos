#include <stdio.h>

int main(){
	int i, n, k = 1, m = 2, q;
	
	printf("digite o valor de n: \n");
	scanf("%d", &n);
	printf(" %d \n",  k);
	
	for(i = 1;i<n;i++){
		k *= 2;
		for(q = 1;q<=m; q++)
		printf(" %d ",k);
		printf(" %d \n",k);
		m += 2;
	}
}
