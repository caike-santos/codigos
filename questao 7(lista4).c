#include <stdio.h> 

int main(){
	
	char genero, resposta;
	int nm = 0, nf = 0, q, i, qgm = 0, qgf = 0;
	
	printf("informe seu genero e se gostou ou nao \n");
	printf("quantidade de participantes: ");
	scanf("%d", &q);
	
	if(q<1){
		printf("valor invalido");
		return 1;
	}
	
	for(i = 0;i<q;i++){
	printf("genero (M ou F): \n");	
	getchar();	
	scanf("%c", &genero);
	genero = toupper (genero);
	printf("(G[Gostou] ou N [Não Gostou]): \n");
	getchar();	
	scanf("%c", &resposta);
	resposta = toupper (resposta);
	
	if(genero != 'M' && genero != 'F'){
		printf("codigo invalido \n");
		return 1;
	}
	
	if(resposta != 'G' && resposta != 'N'){
		printf("codigo invalido \n");
		return 1;
	}
	
	
	
	if(genero == 'M'){
		nm++;
		if(resposta == 'G'){
			qgm++;
		}
	}else{
		if(genero == 'F'){
			nf++;
			if(resposta == 'G'){
				qgf++;
			}
		}
		}
	}
	
	printf("Numero de pessoas que gostaram do produto:%d \n\n", qgm+qgf);
	printf("Numero de pessoas que não gostaram do produto:%d \n\n", q-(qgm+qgf));
	
	if(qgm>qgf){
		printf("homens gostaram mais");
	}else{
		if(qgm<qgf){
		printf("mulheres gostaram mais");
		}else{
			printf("teve o mesmo resultado");
		}

	}
	
	
	
	
	
}
