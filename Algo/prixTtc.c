#include <stdio.h>
#include <stdlib.h>


int main()
{
float prix , tva , ttc ;
printf("Taprez le prix : ");
scanf("%f" , &prix);
tva = 20 ;
ttc = prix + (tva/100);
printf("prix TTC : %f" , ttc);
return 0 ;
}
