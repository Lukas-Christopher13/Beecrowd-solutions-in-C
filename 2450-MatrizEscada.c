#include <stdio.h>

int main () {

    int N,M;
	int i,e,j,g,k;
	int soma;

	scanf("%d %d",&N,&M);

	int matriz[N][M];
	int linha[M];
    //scanear matriz
	for(i = 0; i < N; i++) {
		for (e = 0; e < M; e++) {
			scanf("%d",&matriz[i][e]);
		}
	}
    for(i = 0; i < (N-1); i++) {
		soma = 0;
		for (e = 0; e < M; e++) {
			soma+= matriz[i][e];
			linha[e] = matriz[i][e];
		}
		//caso 000000
		if (soma == 0) {
			for(j = 0; j < M; j++){
				if(matriz[i+1][j] != 0){
					printf("N\n");
					return 0;
				}
			}
		//casos normais
		} else {
			for(g = 0; g < M; g++) {
				if (matriz[i][g] != 0){
					g++;
					break;
				}

			}
			for(k = 0; k < g; k++){
				if(matriz[i+1][k] != 0) {
					printf("N\n");
					return 0;
				}
			}
		}
	}  

    printf("S\n");

	return 0;
}