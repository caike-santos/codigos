#include <stdio.h>

int main(){
	int n, maior, menor, meio, a, b, c, n2;
	printf("escolha um numero no intervalo de 100 a 999 e receba um novo numero com os algarismos na ordem crescente \n");
	printf("digite o numero: ");
	scanf("%d", &n);
	
	if((n<100) || (n>999)){
		printf("numero invalido");
	}
	else{
		a = n/100;
	n %= 100;
	b = n/10;
	n %= 10;
	
	
if(a>b && a>n){
	maior = a;
	if(b>n){
		meio = b;
		menor = n;
	}
	else{
		menor = b;
		meio = n;
	}
}
else{
    if(b>a && b>n){
	    maior = b;
	if(a>n){
		meio = a;
		menor = n;
	}
	else{
		menor = a;
		meio = n;
	}
}
else{
	maior = n;
	if(a>b){
		meio = a;
		menor = b;
	}
	else{
		menor = a;
		meio = b;
	}
}

}

	n2 = (menor*100) + (meio*10) + maior;
	
	printf("%d", n2);

	}
	
	
	
}
