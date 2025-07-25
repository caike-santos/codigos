#include <stdio.h>

int main(){
	
	float p, pp;
	int n;
	
	printf("escolha um numero que esta relacionado a um planeta e descubra o seu peso nele\n");
	printf("1 mercurio, 2 venus, 3 marte, 4 jupter, 5 saturno, 6 urano\n");
	
	do{
		printf("digite seu peso:\n");
	    scanf("%f", &p);
	    if(p<1){
	    	printf("ta muito levinho, digite novamente\n");
		}
	}
	while(p<1);
	
	printf("escolha o numero do planeta:\n");
	scanf("%d", &n);
	
	if(n<1){
		printf("numero invalido\n");
	}
	else{
		switch(n){
		case 1: pp = (p/10)*0.37;
		printf("seu peso:%.2f", pp);
		break;
		case 2: pp = (p/10)*0.88;
		printf("seu peso:%.2f", pp);
		break;
		case 3: pp = (p/10)*0.38;
		printf("seu peso:%.2f", pp);
		break;
		case 4: pp = (p/10)*2.64;
		printf("seu peso:%.2f", pp);
		break;
		case 5: pp = (p/10)*1.15;
		printf("seu peso:%.2f", pp);
		break;
		case 6: pp = (p/10)*1.17;
		printf("seu peso:%.2f", pp);
		break;
	}
	}
	
	return 0;
}

