#include <stdio.h>
#include <float.h>

int main(){
	int i;
	float med, su = 0, n, menor = DBL_MAX, s = 0;
	
	for(i = 1;i<=10;i++){
		printf("escolha o numero: \n");
		scanf("%f", &n);
		
		if(i<=5){
			s += n;
		}
		if(i>3 && i<8){
				if(n<menor){
				menor = n;
			}
		}
		if(i>=5){
		su += n;	
		}
		
	}
	med = su/10;
	
	printf("\nA soma dos 50 primeiros:%.2f \n", s);
	printf("menor numero do 3° ao 8° valores fornecidos:%.2f \n", menor);
	printf("A media entre os ultimos 5 valores:%.2f", med);
}
