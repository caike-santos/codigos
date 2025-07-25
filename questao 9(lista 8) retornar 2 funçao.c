#include <stdio.h>

void divisores(int n, int *soma, float *media){
	int i, quant = 0;
	*soma = 0;
	for(i=1; i<=n; i++){
		
		if(n % i == 0){
			*soma += i;
			quant++;
			printf("%d ", i);
		}
		
	}
if(quant>0){
	*media = (float)(*soma) / quant;
}else{
	*media = 0;
}
}

int main(){
	
	int n, soma;
	float media;
	
	printf("escolha o n: ");
	scanf("%d", &n);
	
	divisores(n, &soma, &media);
	
	printf("\nsoma:%d\n", soma);
	printf("media:%.2f", media);
}
