#include <stdio.h>

int main() {
	

int n;
float p, v;

do{
printf("preço do produto: \n");
scanf("%f", &p);
if(p<1){
	printf("valor invalido digite novamente \n");
}
}
while(p<1);


printf("quantidade das prestaçoes: \n");
scanf("%d", &n);

switch(n){
	case 1: v = 0.9*p;
	printf("valor da prestaçao:%.2f", v);
	break;
	case 5: v = p/5;
	printf("valor da prestaçao:%.2f", v);
	break;
	case 10: v = (1.2*p)/10;
	printf("valor da prestaçao:%.2f", v);
	break;
	default: printf("valor da prestaçao invalida");
	
}
}
