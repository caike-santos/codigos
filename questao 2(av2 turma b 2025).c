#include <stdio.h>

void leitor();

int main(){
	
	

    leitor();
    
    
}
void leitor(){
	
	int i = 1, valor, k = 1, j;
	float quantprimos = 0, media;
	
	int quantidade = 0;
	int soma = 0;
	
	while(i<=3){
		
		printf("escolha um valor: \n");
		scanf("%d", &valor);
		
		
		
		quantidade++;
		soma++;
		
		if(valor % 2 == 0){
			soma += valor;
		}
		
		
		for(j = 2; j<(valor/2); j++){
			if(valor % j == 0){
				k = 0;
			}
		}
		
		if(k){
			quantprimos++;
		}
		
		
		if(valor == 0){
			i++;
		}
	}
	
	if(quantprimos == 0){
		 media = 0;
	}else{
		media = quantprimos / quantidade;
	}

	printf("quantidade: %d\n", quantidade);
    
    printf("soma dos pares: %d\n", soma);
    
    printf("media dos primos: %.2f\n", media);
}
