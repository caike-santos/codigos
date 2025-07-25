#include <stdio.h>

int main(){
	float v, r,vf;
	int i, a;
	printf("coloque o dinheiro investido, o rendimento ao mes e o tempo em ano de investimento e descubra o valor final \n");
	
	printf("digite o valor: \n");
	scanf("%f", &v);
	printf("digite o rendimento ao mes (x%): \n");
	scanf("%f", &r);
	printf("digite o tempo de imvestimento em anos: \n");
	scanf("%d", &a);
	
	a *= 12;
	r /= 100;
	
	for(i = 0; i < a ;i++) {
		
	v *= (r+1);
			
	}
	printf("%.2f",v);
	
	
	
}
