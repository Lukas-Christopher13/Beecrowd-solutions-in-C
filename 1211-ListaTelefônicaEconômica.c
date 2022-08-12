typedef struct {
    char num[201]; 
}Telefone;

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comparar();

int main(){

    int n;
    int i,e;
    int quant;

    while (scanf("%d",&n) != EOF){
        Telefone primeiro;
        Telefone telefone[n];
        //scanf("%s",primeiro.num);
        //quant = strlen(primeiro.num);

        for(i = 0; i < n;i++) {
            scanf("%s",telefone[i].num);
        }

        qsort(telefone,n,sizeof(Telefone),comparar);

        //contagem
        int cont = 0;
        int tamanho;
        primeiro = telefone[0];
        tamanho = strlen(primeiro.num);

        for (i = 1; i < n;i++){
            for(e = 0; e < tamanho; e++) {
                if(primeiro.num[0] != telefone[i].num[0]) {
                    primeiro = telefone[i];
                    break;

                } else if(primeiro.num[e] == telefone[i].num[e]){
                    cont++;
                } else {
                    primeiro = telefone[i];
                    break;
                }
            }

        }
        printf("%d\n",cont);

    }
    
    return 0;
}

int comparar(const void *p1, const void *p2) {
    Telefone *valor1 = (Telefone *)p1;
    Telefone *valor2 = (Telefone *)p2;

    return strcmp(valor1->num,valor2->num);

}