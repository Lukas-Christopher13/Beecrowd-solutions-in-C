typedef struct {
    int nota;
    int indice;
}recreio;

#include <stdio.h>
#include <stdlib.h>

int comparar(const void *p1,const void *p2);

int main() {
    
    int N,M,i,e;

    scanf("%d",&N);
    for (i = 0; i < N; i++) {
        scanf("%d",&M);
        recreio notas[10000];
        for (e = 0; e < M; e++){
            scanf("%d",&notas[e].nota);
            notas[e].indice = e;
        }

        //sort!
        int cont = 0;
        qsort(notas,M,sizeof(recreio),comparar);

        for(e = 0; e < M;e++) {
            if(notas[e].indice == e){
                cont++;
            }

        }
        printf("%d\n",cont);
    } 

    return 0;
}

int comparar(const void *p1,const void *p2) {
    if((*(int*)p1) == (*(int*)p2)){
        return 0;
    } else if((*(int*)p1) < (*(int*)p2)){
        return 1;
    } else {
        return -1;
    }

}