#include <stdio.h>
#include <stdlib.h>
/*
 Fazer uma fun��o que recebe, por par�metro, uma matriz A(50,50) de
n�meros inteiros e um n�mero inteiro B. A fun��o dever� retornar o
n�mero de ocorr�ncias de B na matriz A.   (20 pontos)
*/
/*
int matriz (int A[50][50], int B)
{
    int i,j,num=0;
    for(i=0;i<50;i++)
    for(j=0;j<50;j++)
    {
        if(B==A[i][j])
        num++;
    }
    return num;
}
*/

/*Escrever um algoritmo seguindo as instru��es abaixo. Leia
atentamente todos os itens abaixo antes de iniciar o desenvolvimento
a)	Crie uma estrutura chamada celular que armazenar� os dados de
aparelhos de celulares. Cada celular ser� representado pelo seu
modelo, empresa e peso al�m da quantidade de unidades que foi vendida.
Desta forma os campos ser�o os seguintes: modelo (150 caracteres),
empresa (100 caracteres), peso (real) e vendidos (inteiro).
*/
/*
typedef struct
{
    char modelo[150];
    char empresa[100];
    float peso;
    int vendidos;
}celular;
*/
/*
b) Crie um procedimento para leitura dos dados de um conjunto de
celulares.  Os par�metros do procedimento s�o: o vetor de celulares e
o tamanho deste vetor.
*/
/*
void leitura (celular a[], int tam)
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
        printf("\n A quantidade de celular vendido: ");
        scanf("&d",&a[i].vendidos);
    }
}
*/
/*
c)	 Crie um procedimento com os mesmos par�metros do item (b) que
imprima o modelo, empresa e peso do celular mais vendido e do menos
vendido.
*/
/*
void vendido (celular a[],int tam)
{
    int i,mais=a[0].vendidos,menos=a[0].vendidos,ig,ip;
    for(i=0;i<tam;i++)
    {
        if(mais>a[i].vendidos)
        {
             mais=a[i].vendidos;
             ig=i;
        }
        if(menor<a[i].vendidos)
        {
            menos=a[i].vendidos;
            ip=i;
        }
    }
    printf("\n O celular mais vendido: ");
    puts(a[ig].modelo);
    puts(a[ig].empresa);
    scanf("%f",a[ig].peso);
    printf("\n O celular menos vendido: ");
    puts(a[ip].modelo);
    puts(a[ip].empresa);
    scanf("%f",&a[ip].peso);
}
*/
/*
d)	Fa�a uma fun��o principal (ou fun��o main) para criar um vetor de
200 celulares, e fa�a uso nessa fun��o dos procedimentos dos itens (b)
e (c).
*/
/*
int main()
{
    int tam=200;
    celular x[tam];
    leitura(x,tam);
    vendidos(x,tam);
    return 0;
}
*/
