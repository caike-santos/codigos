#include<stdio.h>

void main(){
	
	//int VetorTeste[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;
	
	//for (i = 0; i<10; i++){
		
	//	if(VetorTeste[i]==10){
			//printf("%d.", VetorTeste[i]);
	//	}else{
		//	printf("%d, ", VetorTeste[i]);
	//	}
		
//	}


int Declaracao[3], i=0;

while(i<3){
	printf("escolha um numero:");
	scanf("%d", &Declaracao[i]);
	i++;
}

i=0;

while(i<3){
	
printf("%d, ", Declaracao[i]);
i++;
}
}

