# include <stdio.h>

int main(){
	int i, j, r = 0;
	
	for(i = 1, j = 50; j>0;i++, j--){
		printf("%d,%d,", i, j);
		
		r += i+j;
		
	}
	printf("\n%d",r);
		
}
