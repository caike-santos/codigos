#include <stdio.h>

int main(){
	int i, neg = 0, pos = 0;
	float n, media, soma;

printf("digite 10 valores e receba a quantidade de numeros negativos e a media dos valores positivos \n");

for(i = 1; i<=10; i++){
	
	printf("digite o valor: \n");
	scanf("%f", &n);
	
	if(n<0){
	neg++;
}else{
	if(n>0){
		soma += n;
		pos++;
	}
}
}
if(pos>0){
	media = soma/pos;
}
else{
	if(pos = 0){
		media = 0;
	}
}

printf("quantidade de negativos:%d \n", neg);
printf("media dos positivos:%.2f", media);


}
