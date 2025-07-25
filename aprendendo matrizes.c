#include <stdio.h>

void main(){
	
	//int celso[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	//int i, j;
	        
	        //for(i = 0; i<3; i++){
	        //	for(j=0; j<3; j++){
			//	printf("%d ", celso[i][j]);
				
			//	}
			//	printf("\n");
		//	}
			
			
	int mel[2][2];		
	int i, j;
	
	for(i = 0; i<2; i++){
		for(j = 0; j<2; j++){
			printf("preencha a matriz:\n");
			scanf("%d", &mel[i][j]);
		}
	}
	
	for(i = 0; i<2; i++){
		for(j = 0; j<2; j++){
			printf("%d ", mel[i][j]);
		}
		printf("\n");
	}
}
