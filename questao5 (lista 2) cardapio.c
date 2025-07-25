#include <stdio.h>

int main(){
	int c, q;
	float p;
	
	printf("escolha o codigo do pedido e a quantidade \n");
    printf("Especificacao Codigo Preco \n");
	printf("Cachorro quente 100 3,50 \n");
	printf("Bauru simples 101 4,50 \n");
	printf("Bauru com ovo 102 5,20 \n");
	printf("Hamburger 103 3,00 \n");
	printf("Cheeseburger 104 4,00 \n");
	printf("Refrigerante 105 2,50 \n");
	
	printf("digite o codigo: ");
	scanf("%d", &c);
	
	do{printf("escolha a quantidade: \n");
	    scanf("%d", &q);
	 {if(q<1)
		printf("quantidade invalida, escolha de novo \n");
	}
	}
			
	while(q<1);
	
	switch(c){
		case 100: p = q*3.5;
		printf("preco:%.2f", p);
		break;
		case 101: p = q*4.5;
		printf("preco:%.2f", p);
		break;
		case 102: p = q*5.2;
		printf("preco:%.2f", p);
		break;
		case 103: p = q*3;
		printf("preco:%.2f", p);
		break;
		case 104: p = q*4;
		printf("preco:%.2f", p);
		break;
		case 105: p = q*2.5;
		printf("preco:%.2f", p);
		break;
		default: printf("digite o codigo certo");
	}
}
