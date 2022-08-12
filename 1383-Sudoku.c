#include <stdio.h>
#define ok 0
#define erro 1 

int chercarLinha(int M[][9]) {
	int i,e,j;
	int valor;
	int linha[9];
	int cont;
    
	cont = 0;
    for(i = 0; i < 9; i++) {
		valor = M[cont][i];
		for(e = 0; e < 9; e++) {
			linha[e] = M[i][e];
		}
		for(j = 0; j < 9;j++){
			if(i == j) {
				continue;
			} else {
				if(linha[j] == valor) {
					return erro;
				}
			}
		}
		cont++;
	}
	return ok;
}

int chercarColuna(int M[][9]) {	
	int i,e,j,K;
	int valor;
	int linha[9];
    
    for(i = 0; i < 9; i++) {
		for(e = 0; e < 9; e++) {
			linha[e] = M[e][i];
		}
        for(K = 0; K < 9; K++){
			valor = M[K][i];
			for(j = 0; j < 9;j++){
			    if(j == K) {
				    continue;
			    } else {
				    if(linha[j] == valor) {
					    return erro;
				    }
			    }
		    }
		}
	}
	return ok;
}
//checar submatriz
int checarsubmatriz(int M[][9]) {
	int i,e,j,g;
	int soma = 0;
    
	for(g = 0; g < 3; g++){
	    for (j = 0; j < 3; j++){
		    for (i = g*3; i < (g+1)*3; i++){
			    for (e = j*3; e < (j+1)*3; e++){
				    soma += M[i][e];
			    }
		    }
			if (soma != 45){
			    return erro;
		    }
			soma = 0;
	    }
	}
	return ok;
}


int main () {

    int n,i,e,j;
	int valor;
	int indI,IndE;

	scanf("%d",&n);

	//n matrizes
	for (j = 1; j <= n;j++) {
		int M[9][9];
		int estado = 0;
		//scanf
		for (i = 0; i < 9; i++) {
			for (e = 0; e < 9; e++) {
				scanf("%d",&M[i][e]);
			}
		}
        //tratamento da matriz
        
		if(chercarLinha(M) == erro) {
			printf("Instancia %d\n",j);
			printf("NAO\n");
		} else if (chercarColuna(M) == erro) {
			printf("Instancia %d\n",j);
			printf("NAO\n");
		} else if(checarsubmatriz(M) == erro) {
			printf("Instancia %d\n",j);
			printf("NAO\n");
		} else {
			printf("Instancia %d\n",j);
			printf("SIM\n");
		}
		printf("\n");
	}
    return 0;
}