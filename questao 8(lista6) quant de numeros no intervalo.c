#include <stdio.h>

int main(){
	int i, y, q = 0;
	float x, n, m, l;
	
	printf("escolha um numero real x: \n");
	scanf("%f", &x);
	printf("escolha um numero inteiro y: \n");
	scanf("%d", &y);
	
	m = x-y;
	l = x+y;
	
	for(i = 1;i<=10;i++){
		printf("escolha um numero real n: \n");
	    scanf("%f", &n);
	    if(n>=m && n<=l){
	    	q++;
		}
	}
	printf("quantos destes numeros reais n estão no intervalo definido por [x-y,x+y]:%d\n", q);
	printf("%f \n", m);
	printf("%f", l);
}

