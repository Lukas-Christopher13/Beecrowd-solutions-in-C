#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    char SouN[4];
}Candidatos;

int compara(const void *p1,const void *p2);

int main() {

    int i,e,j;
    int valor;
    int cont = 0;

    Candidatos candidato[10000];
    
    i = 0;
    scanf("%s",candidato[i].nome);
    while (strcmp(candidato[i].nome, "FIM") != 0) {
        scanf("%s",candidato[i].SouN);
        i++;
        cont++;
        scanf("%s",candidato[i].nome);
    }
    //o amigo do haby
    int posicao = 0;
    char amigo[50];
    for(e = 0; e < cont; e++) {
       if(strcmp(candidato[posicao].SouN,"YES") == 0) {
           if((strcmp(candidato[e+1].SouN,"YES") == 0) && 
           (strlen(candidato[posicao].nome) < strlen(candidato[e+1].nome))) {
               posicao = e+1;
               e = posicao; 
            } 
        } else {
            posicao++;
            e++;
        }
    }
    strcpy(amigo,candidato[posicao].nome);
    //Ordenar e printar
    qsort(candidato,cont,sizeof(Candidatos),compara);

    for (i = 0; i < cont; i++) {
        if(strcmp(candidato[i].SouN,"YES") == 0) {
            if(strcmp(candidato[i].nome,candidato[i+1].nome) == 0){
                continue;
            }
            printf("%s\n",candidato[i].nome);
        }
    }
    //No
    for(e = 0; e < cont; e++) {
        if(strcmp(candidato[e].SouN,"NO") == 0){
            printf("%s\n",candidato[e].nome);
        }
    }
    printf("\nAmigo do Habay:\n%s\n",amigo);

    return 0;
}

int compara(const void *p1,const void *p2) {
    int r = strcmp((*(Candidatos*)p1).nome,
                   (*(Candidatos*)p2).nome);

    if(r == 0){
        return 0;
    } else if(r < 0) {
        return -1;
    } else {
        return 1;
    }
}