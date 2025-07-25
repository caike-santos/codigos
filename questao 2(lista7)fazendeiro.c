#include <stdio.h>

int main(){

	float m, c, a=0;
	
	printf("digite a produçao anual:");
	scanf("%f", m);
	printf("digite a constante de produçao por ano C%:");
	scanf("%f", c);
	c /= 100;
	c += 1;
	for (;m<= 2*m;m *= c){
		a++;
	}
	
	printf("quantidades de anos necessario para que a produçao duplique:%f", a);
}
