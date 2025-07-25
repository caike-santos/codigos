# include <stdio.h>

int main (){
	int q, n, m, v, d, nmaior, i, j, k, vf = 0, vtm = 0, mmaior = 0;
	
	printf("numero de motoristas: \n");
	scanf("%d", &q);
	
	for(i = 1; i<=q ; i++){
		vf = 0;
		printf("numero da carteira do motorista %d: \n", i);
		scanf("%d", &n);
		
		printf("numero de multas do motorista %d: \n", i);
		scanf("%d", &m);
		if(m == mmaior){
			mmaior = 0;
		}else{
			
			if(m>mmaior){
			mmaior = m;
			nmaior = n;
		}	
	}
	    for(j = 1; j<=m; j++){
			printf("valor da multa %d: \n", j);
			scanf("%d", &v);
			vf += v;
			}
		printf("valor total da multa:%d \n", vf);
		vtm += vf;
		}

	printf("valor total arrecadado: %d\n", vtm);
	if(mmaior == 0){
		printf("numero de multas iguais");
		return 1;
	}
	printf("motorista que possui mais multas:%.2d", nmaior);
	
}
