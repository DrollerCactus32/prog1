#include <stdio.h>
#include <math.h>

int main()
{
int r;
int terulet;
int kerulet;

printf("Adja meg a kor sugarat: (cm) \n");
scanf("%d", &r);

kerulet= 2*r*M_PI;
printf("A kor kerulete: %d \n", kerulet);
terulet = r*r*M_PI;
printf("A kor terulete: %d \n", terulet);

    return 0;
}