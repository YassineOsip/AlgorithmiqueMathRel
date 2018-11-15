#include<stdio.h>

int main(){

    int num, dig1, dig2, dig3;
    printf("Enter 3 nombres attachee: ");
    scanf("%d", &num);
    dig3 = num % 10;
    num = num / 10;
    dig2 = num % 10;
    num = num / 10;
    dig1 = num % 10;
	//ou simplement extraire les nombres utilisée la solution suivante : 
	/*
	dig1 = num % 10 ;
	dig2 = num / 10 % 10 ; 
	dig3 = num / 100 ; 
    */
	printf("%d", dig1+dig2+dig3);
    return 0;


}
