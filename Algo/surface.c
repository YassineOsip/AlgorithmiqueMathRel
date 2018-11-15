#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int B,H,S ;
    printf("Tapez Lhauteur : ");
    scanf("%d",&H);
    printf("Tapez la base : ");
    scanf("%d",&B);
    S = H*B/2 ;
    printf("la surface est : %d \n" , S);
    system("pause>nul");
}

