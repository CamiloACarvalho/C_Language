#include <stdio.h>
#include <stdlib.h>
#define tam 3


//Lista de exercicio para a terceira TVC
//exercícios de matrizes 1

/*
int somatriz(int a[][tam])
{
    int i,j;
    int soma=0;
    for(i=0;i<tam;i++)
    for (j=0;j<tam;j++)
    soma=soma+a[i][j];
    return soma;
}
int main()
{
    int b[tam][tam],i,j,soma;
    printf("\n Digite uma matriz:\n");
    for(i=0;i<tam;i++)
    for(j=0;j<tam;j++)
    {
        printf("[%d][%d]= ",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
    soma=somatriz(b);
    printf("\n O valor do vetor e': %d",soma);
    return 0;
}
*/

// numero 2   //nao entendi nada desse programa!!!!
/*
int diago(int m[][tam])
{
    int i,j,soma=0;
    for (i=0;i<tam;i++)
    for(j=0;j<tam;j++)
    {
        if((i==j)||(i+j==4))
        soma=soma+m[i][j];
    }
    return soma;
}
int main()
{
    int a,i,j,x[tam][tam];
    printf("\n Digite uma matriz:\n");
    for(i=0;i<tam;i++)
    for(j=0;j<tam;j++)
    {
        printf("[%d][%d]=",i+1,j+1);
        scanf("%d",&x[i][j]);
    }
    a=diago(x);
    printf("\n O valor da diagonal principal e da secundaria da matriz e': %d",a);
    return 0;
}
*/
// numero 3 // ta dando erro tbm, nao estou sabendo fazer...hunf
/*
float mat (float a[7][6],int linha,int coluna)
{
    int i;
    float soma=0;
    for(i=0;i<linha;i++)
    {
        soma=soma+a[4][i];
    }
    for(i=0;i<coluna;i++)
    {
        soma=soma+a[i][2];
    }
    soma=soma-a[4][2];
    return soma;
}
int main()
{
    int i,j;
    float r[7][6],l;
    printf("\n Digite uma matriz: \n");
    for(i=0;i<7;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("\n Informe o elemento [%d][%d]: ",i+1,j+1);
            scanf("%f",&r[i][j]);
        }
    }
    l=mat(r,7,6);
    printf("\n A soma dos elementos da linha 5 e coluna 3 e': %f",l);
    return 0;
}
*/

//numero 4 //estes programas estao todos errados
/*
float matriz(float m[][3])
{
    int i,j, menor;
    for (i=0;i<3;i++)
    for (j=0;j<3;j++)
    {
        if(i+j==2)
        {
            if(i==0&&j==0)
            menor=m[i][j];
            if(menor>m[i][j])
            menor=m[i][j];
        }
    }
    return menor;
}
int main()
{
    int i,j;
    float a[3][3],b;
    printf("\n Digite uma matriz: \n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("[%d][%d] = ",i+1,j+1);
        scanf("%f",&a[i][j]);
    }
    b=matriz(a);
    printf("\n O menor valor da segunda diagonal e': %f",b);
    return 0;
}
*/


//numero 5 vai a merda...nao entendi nada

// numero 6 -> sai fora..

//exercícios das aulas de lab e algorit

//exercício de laboratorio - matrizes

//1
/*
void imprime(float m1[3][3])
{
    int i,j;
     for(i=0;i<3;i++)
     {
         printf("\n Linha %d \n",i);
         for (j=0;j<3;j++)
         {
           printf(" %.2f" ,m1[i][j]);
         }
     }
}
void calmatriz(float m[3][3], float n)
{
    int i, j;
    float m1[3][3];
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        m1[i][j]=m[i][j]*n;
    }
    imprime(m1);
}
int main()
{
    int i,j;
    float x[3][3],y;
    printf("\n Digite uma matriz\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("[%d]x[%d]= ", i+1,j+1);
        scanf("%f",&x[i][j]);
    }
    printf("\n Digite um multiplo escalar: ");
    scanf("%f",&y);
    calmatriz(x,y);
    return 0;
}
*/

//2
/*
int main()
{
    int i,j,a[7][5];
    printf("\n Digite a matriz:\n ");
    for(i=0;i<7;i++)
    for(j=0;j<5;j++)
    {
        printf("[%d]x[%d]= ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<7;i++)
    {
         printf("\n Linha %d \n",i);


           printf(" %d" ,a[i][2]);

    }
    return 0;
}
*/
