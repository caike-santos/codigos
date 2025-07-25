#include <stdio.h>

int main(){
	
int n, soma = 0, i;

printf("descubra a soma dos números de 1 a N, sendo N um número inteiro \n");
printf("digite o numero N: ");
scanf("%d", &n);

if(n==0){
	printf("%d.", n);
	return 1;
}

if(n>0){
	for(i = 1;i <= n; i++){
	soma += i;
}

}else{
	for(i = 1;i >= n; i--){
		soma += i;
	}
}
printf("soma = %d.", soma);


}
