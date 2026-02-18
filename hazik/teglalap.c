#include <stdio.h>

int main()
{
int a;
int b;
int terulet;
int kerulet;

printf("Adja meg a teglalap A oldalanak hosszat: \n");
scanf("%d", &a);

printf("Adja meg a teglalap B oldalanak hosszat: \n");
scanf("%d", &b);

kerulet= 2*a+2*b;
printf("A teglalap kerulete:, %d\n", kerulet);
terulet = a*b;
printf("A teglalap terulete:, %d\n", terulet);

return 0;
}