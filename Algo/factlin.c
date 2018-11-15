 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 
void main () {
    int nb, factorielle;
	nb = 0;
	factorielle = 0;
    puts("ENTRER UN NOMBRE");
	scanf("%d", &nb);
	if (nb != 0)
	{
		factorielle = nb;
		do {
			nb = nb - 1;
			factorielle = factorielle * nb;
		}
		while (nb > 1);
	}
	else
	{
		factorielle = 0;
	}
 
	printf("La factorielle de %d est : %d", nb, factorielle);
 
	getch();
 
}