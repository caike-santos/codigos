#include <stdio.h>

int main(){
	
	int n;
	
	printf("escolha um numero entre 1 e 7 e receba o dia da semana correspondente \n\n");
	
	printf("digite o numero: \n");
	scanf("%d", &n);
	
	switch(n){
		case 1: printf("domingo");
		break;
		case 2: printf("segunda");
		break;
		case 3: printf("terca");
		break;
		case 4: printf("quarta");
		break;
		case 5: printf("quinta");
		break;
		case 6: printf("sexta");
		break;
		case 7: printf("sabado");
		default : printf("digite o numero certo, burro");
		
}
}

