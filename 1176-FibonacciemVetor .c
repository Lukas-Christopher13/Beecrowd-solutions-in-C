#include <stdio.h>

unsigned long long int fibi(int n) {

	unsigned long long int vfib[] = {0,1,0};
	int i;
	
	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	}

    n--;

	for (i = 0; i < n; i++) {
		vfib[2] = vfib[0] + vfib[1];
		vfib[0] = vfib[1];
		vfib[1] = vfib[2];

	}
  
    return vfib[2];	
}

int main()
{   
	int n;
	int t;
	int i;

	scanf("%d",&t);
    
	for (i = 0; i < t; i++) {
		scanf("%d",&n);
		printf("Fib(%d) = %lld\n", n,fibi(n));
	}

	return 0;
}