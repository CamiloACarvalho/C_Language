#include <stdio.h>
#include <stdlib.h>

int main()
{float v,c,l,h;
//*Este programa tem a funçao de agilizar o calculo do volume de qualquer quadrilatero*/
    printf("Digite o valor do comprimento do quadrilatero desejado:\n");
    scanf("%f",&c);
    printf("Agora digite o valor da largura:\n");
    scanf("%f",&l);
    printf("Insira o valor da altura:\n");
    scanf("%f",&h);
    v=c*l*h;
    printf("O volume do quadrilatero e:\n%.5f\n",v);
    return 0;

}
