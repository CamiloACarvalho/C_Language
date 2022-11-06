#include <stdio.h>
#include <stdlib.h>
#define size 3
/*
void imprima(float m2[size][size])
{
    int i,j;
    for (i=0;i<size;i++)
    {
      printf("\n Linha %d \n",i);
      for (j=0;j<size;j++)
       {
           printf(" %.2f" ,m2[i][j]);
       }
    }
}
void mat(float m1[size][size], float a)
{
    float m2[size][size];
    int i,j;
    for (i=0;i<size;i++)
    for (j=0;j<size;j++)
    {
        m2[i][j]=m1[i][j]*a;
    }
    imprima(m2);
}
int main()
{
    float u[size][size],w,y;
    int i,j;
    printf("\n Digite os valores da matriz\n");
    for(i=0;i<size;i++)
    for(j=0;j<size;j++)
    {
        scanf("%f",&u[i][j]);
    }
    printf("\n Digite um multiplo escalar: ");
    scanf("%f",&w);
    mat(u,w);
    return 0;
}
*/
/*
int main()
{
    int a[7][5],i,j;
    printf("\n Digite os valores da matriz\n");
    for(i=0;i<7;i++)
    for(j=0;j<5;j++)
    {
        scanf("%d",&a[i][j]);
    }
    for (i=0;i<7;i++)
    {
      printf("\n Linha %d \n",i);


           printf(" %d" ,a[i][2]);

    }
    return 0;
}
*/
/*
int maior(int m1[size][size])
{
    int i,j,ma;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)

        {
            if(i==0&&j==0)
            ma=m1[i][j];
            if(ma<m1[i][j])
            ma=m1[i][j];
        }
    }
    return ma;
}
int menor(int m2[size][size])
{
    int i,j,me;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i==0&&j==0)
            me=m2[i][j];
            if(me>m2[i][j])
            me=m2[i][j];
        }
    }
    return me;
}
int main()
{
    int i,j,a,b,mt[size][size];
    printf("\n Digite uma matriz quadrada: ");
    for(i=0;i<size;i++)
    for(j=0;j<size;j++)
    {
        scanf("%d",&mt[i][j]);
    }
    a=maior(mt);
    b=menor(mt);
    printf("\n O maior valor da matriz e': %d. E o menor valor e': %d",a,b);
    return 0;
}
*/
