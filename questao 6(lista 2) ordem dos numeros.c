#include <stdio.h>

int main(){
	int i, a, b,c, maior, meio, menor;
	
	printf("escolha um numero i e tres valores a b c \n");
	printf("i = 1: os tres valores em ordem crescente \n");
	printf("i = 2: os tres valores em ordem decrescente \n");
	printf("i = 3: o maior valor deve ser apresentado no meio dos outros. \n");
	
	printf("escolha o numero i: \n");
	scanf("%d", &i);
	printf("escolha o valor a: \n");
	scanf("%d", &a);
	printf("escolha o valor b: \n");
	scanf("%d", &b);
	printf("escolha o valor c: \n");
	scanf("%d", &c);
	
	if((a>b) && (a>c)){
		maior = a;
		
			if(b>c){
		meio = b;
		menor = c;
	}
	else{
		meio = c;
		menor = b;
	}

	}
	
	if((b>a) && (b>c)){
		maior = b;
		
		if(a>c){
			meio = a;
			menor = c;
		}
		
		else{
			meio = c;
			menor = a;
		}
	}
	else{
		maior = c;
		
		if(a>b){
			meio = a;
			menor = b;
		}
		else {
			menor = a;
			meio = b;
		}
	}
	
	switch(i){
	
case 1: printf("%d, %d, %d", menor, meio, maior);
	break;
	case 2: printf("%d, %d, %d", maior, meio, menor);
	break;
	case 3: printf("%d, %d, %d", menor, maior, meio);
	break;
	default: printf("codigo invalido");
	
	}
	
}
	
	
	

