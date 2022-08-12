#include <stdio.h>
#include <stdlib.h>

int main() {

   int a;
   int b;
   int c;
   int maior;

   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);

   maior = (a + b + abs(a - b)) / 2;

   a = maior;
   b = c;

   maior = (a + b + abs(a - b)) / 2;

   printf("%d eh o maior\n", maior);

   return 0;
}