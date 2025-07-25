#include <stdio.h>
#include <locale.h>
#include <string.h>

struct BlocoDeTipos{
	int quant;
	float preco;
	char nomedoproduto[20];
};
typedef struct BlocoDeTipos camarada;

//void main(){
//	setlocale(LC_ALL, "Portuguese");
	
//	camarada fran = {3, 7.50, "chicletão"};
//	
//	printf("quantidade: %d\n", fran.quant);
//	printf("preço: %.2f\n", fran.preco);
//	printf("nome do produto: %s\n\n", fran.nomedoproduto);
	
	
//	fran.quant = 2;
//	fran.preco = 5;
//	strcpy(fran.nomedoproduto, "jujuba");
	
//	printf("quantidade: %d\n", fran.quant);
//	printf("preço: %.2f\n", fran.preco);
//	printf("nome do produto: %s\n\n", fran.nomedoproduto);
	
	
//	printf("digite a quantidade:\n");
//	scanf("%d", &fran.quant);
//	printf("digite o preço:\n");
//	scanf("%f", &fran.preco);
//	printf("nome do produto:\n");
//	scanf("%s\n", &fran.nomedoproduto);
	
//	printf("quantidade: %d\n", fran.quant);
//	printf("preço: %.2f\n", fran.preco);
//	printf("nome do produto: %s\n\n", fran.nomedoproduto);
	
//}

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	camarada fran[3];
	
	int i;
	
	for(i=0;i<3;i++){
		
		
	}
}
