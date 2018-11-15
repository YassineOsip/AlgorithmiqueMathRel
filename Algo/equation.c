#include <stdlib.h>
#include <stdio.h>

int main(){
float a , b , y , x ;

printf("tapzez a : ");
scanf("%d" , &a) ;
printf("tapzez b : ");
scanf("%d" , &b) ;
printf("tapzez y : ");
scanf("%d" , &y) ;
if (a!=0)
{
x = (y - b )  / a ;
printf("la solution de l'equation est : %f" , x);
}
else{
    printf("can't devide by zero");
}
}
