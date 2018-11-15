#include <stdlib.h>
#include <stdio.h>

int main()
{
    float a , b , c , x , x1 , x2 ,delta;
    char[200] x0;
    x0 = "lequation nadmet pas de solution dans le groupment IR";
    printf("Tapez a : ");
    scanf("%f" , &a);
    printf("Tapez b : ");
    scanf("%f" , &b);
    printf("Tapez c : ");
    scanf("%f" , &c);
    delta = (b*b) - (4*a*c);
    if( delta < 0){
        printf("%s" , x0);

    }
    else if(delta > 0){
        x1=((-b)+(delta ** (1/2)));
        x2=((-b)-(delta ** (1/2)));
        printf("lensemble de solution est : x1=%f , x2=%f ",x1,x2);
    }
    else if(delta == 0){
        x = (-b) / (2*a);
        printf("la seul solution est : %f" , x);

    }
    else{
        printf("!!!!!!!!");

    }
    return 0 ;

}
}
