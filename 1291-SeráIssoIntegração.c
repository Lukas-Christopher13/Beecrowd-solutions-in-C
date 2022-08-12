#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    double a;
    
    double ar1;
    double ar2;
    double ar3;
    
    
    while(scanf("%lf", &a) != EOF) {
    
        ar3 = (-a) * a * (3 * (sqrt(3) - 4) + 2 * M_PI)/3.0;
        ar2 = 4 * (a * a * (1 - M_PI/4) - (ar3) / 2);
        ar1 = a * a - ar2 - ar3;
    
        printf("%.3lf ",ar1);
        printf("%.3lf ",ar2);
        printf("%.3lf\n",ar3);
        
    }
    
    return 0;
}