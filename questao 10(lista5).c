#include <stdio.h>

int main(){
	
	int i, a, ma = 0, mea = 300, qm = 0, at = 0, am = 0; 
	char g;
	float medam, medap, ph, qh = 0;
	
	for(i = 1;i<=6 ; i++){
		printf("digite o genero [F]eminino, [M]asculino: \n");
		scanf(" %c", &g);
		g = toupper(g);
		if(g == 'M'){
		 qh++;
		}
		if(g == 'F')
			qm++;
		
		printf("digite a altura em centimetros: \n");
		scanf("%d", &a);
		if(a < mea){
			mea = a;
		}
		if(a > ma){
			ma = a;
		}
		if(g == 'F'){
			am += a;
		}
		at += a;
	}
	medam = am/qm;
	medap = at/6;
	ph = (qh/6)*100;
	
	
	printf("maior altura:%d \n", ma);
	printf("menor altura:%d \n", mea);
	printf("media de altura das mulheres:%.2f \n", medam);
	printf("media de altura da populaçao:%.2f \n", medap);
	printf("percentual de homens na populaçao:%.2f%%", ph);
	
}
