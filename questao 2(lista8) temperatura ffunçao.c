#include <stdio.h>

float conversao(float c){
	
	float resultado;
	
	resultado = c * 1.8 + 32;
	
	return resultado;
}

int main(){
	
	float c;
	
	printf("escolha a temperatura em celsius: ");
	scanf("%f", &c);
	
	printf("%.2fcelsius = %.2ffahrenheit", c, conversao(c));
}
