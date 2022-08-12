#include <stdio.h>
#include <math.h>
  
int main() {
    double r1,x1,y1,r2,x2,y2;
    double distancia;
    while (scanf("%lf %lf %lf %lf %lf %lf",&r1, &x1, &y1, &r2, &x2, &y2) != EOF) {
        abs(r1);
        abs(r2);
        abs(x1);
        abs(x2);
        abs(y1);
        abs(y2);
        distancia = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        if (r1 >= distancia+r2)
            printf("RICO\n");
        else
            printf("MORTO\n");
    }
    return 0;
}