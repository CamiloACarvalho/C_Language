#include <stdio.h>
#include <stdlib.h>

int main()
{   float f,c;
    //Este programa foi criado para facilitar a conversao de graus Celsius para graus Fahrenheit*/.
    printf("Digite a temperatura em graus Celsius para a conversao em graus Fahrenheit:\n");
    scanf("%f",&c);
    f=(9*c+160)/5;
    printf("A temperatura em graus Fahrenheit e:\n%.3f\n",f);
    return 0;
}
