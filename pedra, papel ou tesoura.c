#include <stdio.h>
#include <string.h>
#include <locale.h>

int resultado(char tipo1[], char tipo2[]);
int escolher(void);

int main(){
	
	srand (time(NULL));
	
	char tipo1[20], tipo2[20], nome[100];
	int vet, i, resultado1;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite seu nome:");
	fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0; 
	printf("\nBem vindo %s, ao Pedra, Papel e Tesoura\n\n", nome);
	printf("Escolha Pedra, Papel ou Tesoura: \n");
    fgets(tipo1, sizeof(tipo1), stdin);
    tipo1[strcspn(tipo1, "\n")] = 0;
	for (i = 0; tipo1[i] != '\0'; i++) {
        
        tipo1[i] = toupper(tipo1[i]);
}
	if (strcmp(tipo1, "PEDRA") != 0 && strcmp(tipo1, "PAPEL") != 0 && strcmp(tipo1, "TESOURA") != 0) {
    printf("Escolha invalida!\n");
    
    return 0;
}
	vet = escolher();
	
	if(vet == 1){
		strcpy(tipo2, "PEDRA");
	}else if(vet = 2){
		strcpy(tipo2, "PAPEL");
	}else{
     	strcpy(tipo2, "TESOURA");
	}
	
	
	printf("Sua escolha:%s\n", tipo1);
	printf("Escolha da maquina:%s\n\n", tipo2);
	
	resultado1 = resultado(tipo1, tipo2);
	if(resultado1 == 2){
		printf("Você perdeu :(");
	}else if(resultado1 == 1){
		printf("EBA você ganhou :)");
	}else if(resultado1 == 0){
		printf("EMPATE");
	}
	
}



int escolher(void){
		
int vet;
	
	
	
	vet = (rand() % 3) + 1;
		return vet;
}


int resultado(char tipo1[], char tipo2[]){

    
    if (strcmp(tipo1, tipo2) == 0) {
        return 0; 
    }

   
    else if ( (strcmp(tipo1, "PEDRA") == 0 && strcmp(tipo2, "TESOURA") == 0) ||
              (strcmp(tipo1, "PAPEL") == 0 && strcmp(tipo2, "PEDRA") == 0)   ||
              (strcmp(tipo1, "TESOURA") == 0 && strcmp(tipo2, "PAPEL") == 0) )
    {
        return 1; 
    }

   
    else {
        return 2; 
    }
}

