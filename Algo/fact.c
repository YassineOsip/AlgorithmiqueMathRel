#include <stdio.h>
#include <stdlib.h>

int factorielle (int nombre)
{
    int x = 0;
    if (nombre == 1)
    {
        x = 1;
        return(x);
    }
    else
    {
        x = nombre * factorielle(nombre - 1);
        return(x);
    }
}

int main(void)
{
   int n = 0, resultat = 0;
   printf ("inserez un nombre : ");
   scanf ("%d", &n);
   resultat = factorielle(n);
   printf ("le resultat de la fonction factorielle est : %d\n", resultat);
   return 0;
}
