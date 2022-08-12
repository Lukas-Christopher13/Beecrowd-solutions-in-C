#include <stdio.h>

int main() {
	
    char O;
    int e,i;
    int count = 0;
    double M[12][12];
    double soma = 0;
    double media = 0;

    scanf("%c",&O);

    for (i = 0; i < 12; i++) {
        for (e = 0; e < 12; e++) {
            scanf("%lf",&M[i][e]);
        }
    }
    
    if (O == 'S') {
        for (i = 0; i < 11; i++) {
            for (e = i+1; e < 12; e++) {
                soma+= M[i][e];
            }  
        }
        printf("%.1lf\n",soma);

    } else if (O == 'M') {
        for (i = 0; i < 11; i++) {
            for (e = i+1; e < 12; e++) {
                media+= M[i][e];
                count++;
            }
        }   
        media = media/count;
        printf("%.1lf\n",media);
    }

	return 0;
}