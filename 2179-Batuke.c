#include <stdio.h>

int main() {
     
    int N;
    int C;
    int F;

    scanf("%d %d %d",&N,&F,&C);

    printf("%d ",(F*N)+(1+C));
    int casasVisitadas = 1;
    int casasVisi = 1;
    int passo = 0;
    
    int j;

    while(casasVisitadas < (N*N)) {

        if (passo % 2 != 0) {
            
            for (j = 0; j < passo; j++) {
                if (casasVisitadas < (N*N)) {
                    C++;
                    casasVisi++;
                    if(C >= 0 && C < N && F >= 0 && F < N) {
                        printf("%d ",(F*N)+(1+C));
                        casasVisitadas++;             
                    }
                    
                }
            }
            for (j = 0; j < passo; j++) {
                if(casasVisitadas < (N*N)) {
                    F++;
                    casasVisi++;
                    if(C >= 0 && C < N && F >= 0 && F < N) {
                        printf("%d ",(F*N)+(1+C));
                        casasVisitadas++;
                    }
                }
            }

            passo++;

        } else {
            for (j = 0; j < passo; j++) {
                if (casasVisitadas < (N*N)) {
                    C--;
                    casasVisi++;
                    if(C >= 0 && C < N && F >= 0 && F < N) { 
                        printf("%d ",(F*N)+(1+C));
                        casasVisitadas++;
                    }
                }
            }
            for (j = 0; j < passo; j++) {
                if (casasVisitadas < (N*N)) {
                    F--;
                    casasVisi++;
                    if(C >= 0 && C < N && F >= 0 && F < N) {
                        printf("%d ",(F*N)+(1+C));
                        casasVisitadas++;
                    }
                }
            }
            passo++;
        }

    }   
    printf("\n%d\n",casasVisi);

    return 0;
} 