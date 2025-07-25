#include <stdio.h>

int main(){
	
	float p, a, imc;
	
	printf("Saiba a sua condicao de peso apartir da sua altura e peso \n");
	printf("digite sua altura em metros: \n");
	scanf("%f", &a);
	printf("digite seu peso: \n");
	scanf("%f", &p);
	
	imc = p/(a*a);
	
	if(imc<18.5){
	
	printf("abaixo do peso");
	
	}
	else{
		
		if(imc<25){
			printf("peso ideal");
		}
		else{
			
			if(imc<30){
				printf("sobre peso");
			}
			else{
				if(imc<35){
					printf("obesidade grau I");
				}
				else{
					if(imc<40){
						printf("obesidade grau II");
					}
					else{
						printf("obesidade grau III");
					}
				}
			}
		}
	}

printf("\nimc:%.2f", imc);
}

