#include <stdio.h>

int main(){
	
	float a, b, h; 
	char f;
	
	printf("calcule a area da figura desejada \n");
	printf("escolha a figura ([C]irculo, [R]etangulo, [Q]uadrado ou [T]riangulo): \n");
	scanf("%c", &f);
	
	f = toupper (f);
	
	if(f == 'C'){
		printf("informe o raio: \n");
		scanf("%f", &b);
		
		a = 3.14159*b*b;
		
		printf("area igual a: %.2f", a);
	}
	else{
		if(f == 'R'){
			printf("informe a medida da base: \n");
			scanf("%f", &b);
			printf("informe a altura: \n");
			scanf("%f", &h);
			
			a = b*h;
			
			printf("area igual a: %.2f", a);
		}
		else{
			if(f == 'Q'){
				printf("informe a medida do lado: \n");
				scanf("%f", &b);
				
				a = b*b;
				
				printf("area igual a: %.2f", a);
			}
			else{
				if(f == 'T'){
						printf("informe a medida da base: \n");
		             	scanf("%f", &b);
			            printf("informe a altura: \n");
			            scanf("%f", &h);
			            
			            a = (b*h)/2;
			            
			            printf("area igual a: %.2f", a);
				}
				else{
					printf("figura invalida");
				}
			}
		}
	}
}
