#include <stdio.h>

int main(){
	 int i, f;
	 float meds, medf, msla = 0, pps, s, st = 0, ft = 0, ps = 0;
	 
	 for(i = 1;i<=6;i++){
	 	printf("digite o seu salario: \n");
	 	scanf("%f", &s);
	 	printf("digite a quantidade de filhos: \n");
	 	scanf("%d", &f);
	 	
	 	st += s;
	 	ft += f;
	 	
	 	if(s > msla){
	 		msla = s;
		 }
		 if(s <= 1000){
		 	ps++;
		 }
	 }
	 meds = st/6;
	 medf = ft/6;
	 pps = (ps/6)*100;
	 
	 printf("media do salario da populaçao:%.2f \n", meds);
	 printf("media do numero de filhos:%.2f \n", medf);
	 printf("maior salario:%.2f \n", msla);
	 printf("percentual de pessoas com salario ate R$ 1.000,00:%.2f%%", pps);
}
