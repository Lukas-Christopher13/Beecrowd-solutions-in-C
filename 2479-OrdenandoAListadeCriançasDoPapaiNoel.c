typedef struct {
    char crianca[50];
    char sinal[2];
} lista;

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compara(const void *p1,const void *p2);

int main() {

    int N,i,j;
    int seComportaram = 0; 
    int nSecomportaram = 0;

    lista nomes[10000];

    scanf("%d",&N);
    for(i = 0; i < N;i++) {
        scanf("%s %s",nomes[i].sinal,nomes[i].crianca);
    }
    //contador
    for(i = 0; i < N;i++) {
        if(strcmp(nomes[i].sinal,"+") == 0){
            seComportaram++;
        } else {
            nSecomportaram++;
        }
    }

    qsort(nomes,N,sizeof(lista),compara);

    for (i = 0; i < N;i++) {
        printf("%s\n",nomes[i].crianca);
    }
    
    printf("Se comportaram: %d | Nao se comportaram: %d\n",seComportaram,nSecomportaram);

    return 0;
}

int compara(const void *p1,const void *p2) {
    int r = strcmp((*(lista*)p1).crianca,
                   (*(lista*)p2).crianca);

    if(r == 0){
        return 0;
    } else if(r < 0) {
        return -1;
    } else {
        return 1;
    }
}