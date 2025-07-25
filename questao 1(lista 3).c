#include <stdio.h>

int main(){
	
	int d1, d2, a1, a2, m1, m2;
	
	printf("escolha duas datas e descubra qual a mais recente \n");
	
	do{
	printf("digite a primeira data (dd mm aa): ");
	scanf("%d %d %d", &d1, &m1, &a1);
	
	if(d1<1){
		printf("data invalida insira novamente\n");
	}
	
	}
	
	while(d1<1);
	
	printf("digite a segunda data (dd mm aa): ");
	scanf("%d %d %d", &d2, &m2, &a2);
	
	if(a1>a2){
		printf("data mais recente: %d/%d/%d", d1, a1, a1);
	}
	else{
		if(a1<a2){
		printf("data mais recente: %d/%d/%d", d2, m2, a2);
		}
		else{
			if(m1>m2){
				printf("data mais recente: %d/%d/%d", d1, m1, a1);
			}
			else{
				if(m1<m2){
						printf("data mais recente: %d/%d/%d", d2, m2, a2);
				}
				else{
					if(d1>d2){
					printf("data mais recente: %d/%d/%d", d1, m1, a1);	
					}
					else{
						if(d1<d2){
							printf("%data mais recente: %d/%d/%d", d2, m2, a2);
						}
						else{
							printf("datas iguais");
						}
					}
				}
			}
		}	
		}
		
		}
	

