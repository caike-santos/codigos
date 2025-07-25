#include <stdio.h>

int main(){
	int x, i, n, q = 0;
	
	printf("digite um valor x: \n");
	scanf("%d", &x);
	
	for(i = 1; i<=3; i++){
		printf("digite o outro valor: \n");
		scanf("%d", &n);
		
		if(n % x == 0){
			q++;
		}
	}
    printf("quantidade de multiplos:%d", q);
    
    return 0;
}	
