#include <stdio.h>

int mysort (int lista[], int n) {
    int i,e;
    int auxi;

    for (i = 1; i < n; i++) {
        for (e = 0; e < n - 1; e++) {
            if (lista[e] > lista[e+1]) {
                auxi = lista[e];
                lista[e] = lista[e+1];
                lista[e+1] = auxi;
            }
        }
    }
    return 0;
}


int main() {
     
    int i,e;
    int valor;
    int n;
    int auxi;
    
    while (scanf("%d", &n) != EOF) {
        int lista[n];

        for (i = 0; i < n; i++) {
            scanf("%d", &lista[i]);
        }

        mysort(lista,n);
        
        for (e = 0; e < n; e++) {
            printf("%.4d\n",lista[e]);
        }

    }
    
    return 0;
} 