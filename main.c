#include <stdio.h>
#include <stdlib.h>

int main()
{   float v,r,h;
    //*O objetivo deste programa e auxilia-lo no calculo dos volumes dos cilindros*/
    printf("Digite o valor do raio do cilindro que deseja calcular o volume:\n");
    scanf("%f",&r);
    printf("Agora entre com o valor da altura do cilindro:\n");
    scanf("%f",&h);
    v=(3.14159*r*r*h);
    printf("O volume calculado do cilindro e:\n%.3f\n",v);
    return 0;
}
