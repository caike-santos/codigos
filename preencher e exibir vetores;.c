#include <stdio.h>

void preencherAleatorio (int vetor[], int tamanho, int limite)
{
	//declara��o de vari�veis
	int i;
	
	srand (time(NULL));
	
	//preenchendo o vetor
	for (i=0;i<tamanho;i++)
	{
		vetor[i] = rand()%limite;
	}
}

void exibir (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	//exibindo os elementos do vetor
	printf ("\n\nElementos do vetor: ");
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
	}
	printf ("\n\n");
}
