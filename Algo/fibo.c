#include <stdio.h>

main ()
{

     int n, i;
     double a, b, c;

     c = 0;
     b = 1;

     printf ("Bienvenue dans mon programme de calcul de la suite de Fibonacci.\n");

     printf ("Entrez N\n");
     scanf ("%d", &n);

     if (n==0 || n==1)
     {
     printf ("n = %d", n);
     }
     else
     {
         for (i=2;i<=n;i++)
         {
             a = b + c;
             c = b;
             b = a;
         }
	 }

	 printf ("U = %lf\n", a);

	 getchar();
}
