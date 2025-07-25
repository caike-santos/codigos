
#include <stdio.h>

int main(){
	float d, c, p, k, ct;
	
	printf("distancia do percurso: \n");
	scanf("%f", &d);
	
	printf("número de quilômetros que o carro percorre com um litro de combustível: \n");
	scanf("%f", &c);
	
	printf("preço do livro do combustivel: \n");
	scanf("%f", &p);
	
	k = c/d;
	ct = d*p;
	
	printf("quantidade de combustível, em litros, consumida durante a viagem:%.2f \n", k);
	printf(" O custo total de combustível:%.2f", ct);
	
	
}
