#include <stdio.h>

int fibonacci(int n){
	
	int i = 0, j = 1, k, p;
	
	
	if(n == 1){
		return 0;
	}
	else if(n == 2){
		return 1;
	}
	else{
		for(k = 3; k<=n; k++){
	    p = i + j;
	    i = j;
	    j = p;
}
	 return p;
	}

}

int main(){
	int n;
	printf("esolha n: \n");
	scanf("%d", &n);
	
	printf ("%d, ", fibonacci(n));
}



