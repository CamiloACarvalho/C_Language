#include <stdio.h>
#include <stdlib.h>
// numero 2 da prova do periodo passado
/*
int matriz(int a[3][3], int b)
{
    int i,j,soma=0;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        if(b==a[i][j])
            soma++;
    }
    return soma;
}
int main()
{
    int i,j,a[3][3],x,g;
    printf("\n Digite uma matriz: ");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("[%d]x[%d]= ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    printf("\n Digite um numero inteiro: ");
    scanf("%d",&x);
    g=matriz(a,x);
    printf("\n O numero de vezes que %d aparece na matriz e': %d",x,g);
    return 0;
}
*/
//numero 2 a) da prova
/*
typedef struct
{
    char modelo[150];
    char empresa[100];
    float peso;
    int vendidos;
}celular;
*/
//b)
/*
void leitura(celular a[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("\n Digite o modelo do celular: ");
        gets(a[i].modelo);
        printf("\n Digite a empresa do celular: ");
        gets(a[i].empresa);
        printf("\n Digite o peso do celular: ");
        scanf("%f",&a[i].peso);
        printf("\n Digite a quantidade de celulares vendidos: ");
        scanf("%d",&a[i].vendidos);
    }
}
*/
//c)
/*
void imprima (celuar a[], int tam)
{
    int i,j,h=a[0].vendidos,ih=0,w=a[0].vendidos,iw=0;
    for(i=0;i<tam;i++)
    {
        if(h>a[i].vendidos) // o h recebendo a[o].vendidos, quer dizer que dizer que ele vai comparar o primeiro cel com os outros vendidos, por isso a compara�ao de h(que � o inicio do contador) com a[i].vendidos (que vai percorrer toda a estrutura comparando o mais vendido)
        {
          h=a[i].vendidos; //aqui o h vai recebendo os maiores velores, ou seja, os celulares mais vendidos
          ih=i; //guarda o indice dos celulares mais vendidos
        }
        if(w<a[i].vendidos)//aqui � a mesma coisa do de cima, s� que � para o celular menos vendido
        {
            w=a[i].vendidos;
            iw=i;//guarda o indice dos valores menores
        }
    }
    printf("\n O celular mais vendido e': ");
    puts(a[ih].empresa); // aqui � para imprimir o valor dos celulares mais vendidos, o [ih] mostra o �ndice desse celular, com isso sera impresso os dados desse celular guardado nesse �ndice
    puts(a[ih].modelo);
    printf("%f",a[ih].peso);
    printf("\n O celular menos vendido e': ");//aqui � a mesma coisa, por�m o [iw] mostra o �ndice que esta as caracteristicas do celular menos vendido
    puts(a[iw].empresa);
    puts(a[iw].modelo);
    printf("%f",a[iw].peso);
}
*/
//d)
/*
int main()
{
    int tam=200;
    celular p[tam];
    leitura (p,tam);//por ser um procedimento � s� colocar leitura recebendo p (que � celular) e tam (para indicar o tamanho)
    imprima (p,tam);//mesma coisa, s� que aqui � para imprimir os valores da estrutura
    return 0;
}
*/

//m�tado direto...olhar urgente
//decora isso porque a prova � isso
