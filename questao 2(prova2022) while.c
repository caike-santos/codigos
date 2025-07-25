#include <stdio.h>

int main(){
	int a, b, n, i = 1, k, q = 0, s = 0, qab = 0;
	float med, sab = 0;
	
	printf("digite o valor de A: \n");
	scanf("%d", &a);
	printf("digite o valor de B: \n");
	scanf("%d", &b);
	printf("digite a quantidade de numeros que será lido: \n");
	scanf("%d", &n);
	
	while(i<=n){
		i++;
		printf("digite o numero:");
		scanf("%d", &k);
		
		if(k<a){
			q++;
		}
		if(k>b){
			s += k;
		}
		if(k>=a && k<=b){
			sab += k;
			qab++;
			
		}
	}
	med = sab/qab;
	printf("%.2f \n", med);
	printf("%d \n", q);
	printf("%d \n", s);
	
}
