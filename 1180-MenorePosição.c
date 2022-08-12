#include <stdio.h>

int main()
{   
	int n;
	int i;

	long long int aux;
	int ind;

	scanf("%d",&n);
	long long int x[n];

	for (i = 0; i < n; i++) {
		scanf("%lld",&x[i]);
	}
    
    for (i = 0; i < n; i++) {
		if (aux >= x[i]) {
			aux = x[i];
			ind = i;
		}
	}

	printf("Menor valor: %lld\n",aux);
	printf("Posicao: %d\n",ind);

	return 0;
}