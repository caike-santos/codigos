#include <stdio.h>

int main(){
	
	int q, i, m, idade, t, qmenor = 0, qf = 0, qm = 0, idademaisantigo = 0, matrimaisantigo, idademaisnovo = 120, matrimaisnovo;
	char genero;
	float s, salario2, medsalarial;
	
	printf("quantidade de funcionarios: \n");
	scanf("%d", &q);
	
	for(i = 0; i < q; i++){
		
		printf("\nmatricula: \n\n");
		scanf("%d", &m);
		printf("genero (M ou F): \n\n");
		scanf(" %c", &genero);
		genero = toupper (genero);
		printf("idade: \n\n");
		scanf("%d", &idade);
		printf("salario: \n\n");
		scanf("%f", &s);
		printf("tempo (em anos): \n\n");
		scanf("%d", &t);
		
		if(idade < 21){
			qmenor++;
		}
		if(genero == 'F'){
			qf++;
		}else{
			qm++;
			salario2 += s;
		}
		if(t > idademaisantigo){
			
			idademaisantigo = t;
			matrimaisantigo = m;
		}
		if(t < idademaisnovo){
			idademaisnovo = t;
			matrimaisnovo = m;
			
		}
	}


        medsalarial = salario2/qm;
        printf("Quantidade de funcionarios que ingressaram na empresa com menos de 21 anos:%d. \n", qmenor);  
        printf("Quantidade de funcionarios do genero feminino:%d. \n", qf);  
        printf("Media salarial dos homens:%.2f. \n", medsalarial);  
        printf("Matricula dos funcionários mais antigo e mais novo:%.2d, %.2d. \n", matrimaisantigo, matrimaisnovo);  

}

