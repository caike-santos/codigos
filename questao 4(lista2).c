
#include <stdio.h>

int main(){
	float d, c, p, k, ct;
	
	printf("distancia do percurso: \n");
	scanf("%f", &d);
	
	printf("n�mero de quil�metros que o carro percorre com um litro de combust�vel: \n");
	scanf("%f", &c);
	
	printf("pre�o do livro do combustivel: \n");
	scanf("%f", &p);
	
	k = c/d;
	ct = d*p;
	
	printf("quantidade de combust�vel, em litros, consumida durante a viagem:%.2f \n", k);
	printf(" O custo total de combust�vel:%.2f", ct);
	
	
}
