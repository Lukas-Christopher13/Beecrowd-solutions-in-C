#include <stdio.h>

int main() {
	
    int L;
    char T;
    int e,i,count;
    double M[12][12];
    double soma = 0;
    double media = 0;

    scanf("%d %c",&L,&T);

    for (i = 0; i < 12; i++) {
        for (e = 0; e < 12; e++) {
            scanf("%lf",&M[i][e]);
        }
    }
    
    if (T == 'S') {
        for (i = 0; i < 12; i++) {
            soma+= M[L][i]; 
        }
        printf("%.1lf\n",media);
    } else if (T == 'M') {
        for (i = 0; i < 12; i++) {
            media+= M[L][i];
            count++; 
        }
        media = media/count;
        printf("%.1lf\n",media);
    }

	return 0;
}