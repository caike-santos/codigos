#include <stdio.h>

int main(){
	int i, n, m = 1, v = 0, b;
	
	
	printf("digite o numero binario\n");
	scanf("%d", &b);
	
	for(i = 10; b > 0; m*=2){
		if(b == 1){
			n = b;
			n *= m;
			v += n;
			b = -4;
			
		}else{
		n = b % i;
		if(n != 0 && n != 1){
			printf("valor nao representa numero binario");
			return 1;
		}
		n *= m;
		v += n;
		b = b/10;
			
		}
	}
	
	printf("valor = %d", v);
}
