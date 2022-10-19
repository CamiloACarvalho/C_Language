#include <stdio.h>
#include <stdlib.h>
#define tam 2
// numero 1
/*
typedef struct cartao
{
     char nome[50];
     char cpf[50];
}cartao;
int main()
{
    cartao x[2];
    int i,j;
    for(i=0;i<2;i++)
   {
       printf("\n Digite o nome:\n");
        gets(x[i].nome);
        printf("\n Digite o CPF:\n");
        gets(x[i].cpf);
   }
   for(j=0;j<2;j++)

   {
    printf("\n Os dados cadastrais da pessoa sao:\n");
    printf("\n O nome: ");
    puts(x[j].nome);
    printf("\n O CPF: ");
    puts(x[j].cpf);
   }
    return 0;
}
*/
//numero 2
/*
typedef struct medidas
{
    char nome[50];
    float peso;
    float altura;
}medidas;
int main()
{
    int i,j;
    medidas x[2];

    for(i=0;i<2;i++)
    {
        printf("\n Digite o nome:\n");
        gets(x[i].nome);
        printf("\n Digite a altura:\n");
        scanf("%f",&x[i].altura);
        printf("\n Digite o peso:\n");
        scanf("%f",&x[i].peso);
        scanf("%*c");

    }
    for(j=0;j<2;j++)
    {
        printf("\n Os dados sobre a pessoa sao:\n");
        printf("\n O nome: ");
        puts(x[j].nome);
        printf("\n O peso: %.4f",x[j].peso);
        printf("\n A altura: %.4f",x[j].altura);
    }
    return 0;
}
*/

//numero 5
/*
typedef struct alunos
{
    char nome[50];
    char curso[50];
    int idede;
    int matricula;
    float nota[3]
    float media[tam];
}alunos;
void leitura(alunos a[tam])
{
   int i,j;
   float media,x=0;
   for(i=0;i<tam;i++)
   {
       printf("\n Digite o nome do aluno: \n");
       gets(a[i].nome);
       printf("\n Digite o curso:\n");
       gets(a[i].curso);
       printf("\n Digite a idade:\n");
       scanf("%d",&a[i].idade);
       printf("\n Digite a matricula:\n");
       scanf("%d",&a[i].matricula);
       scanf("%*c");
       for(j=0;j<3;j++)
       {
           printf("\n Digite o valor das tres notas:\n");
           scanf("%f",&a[i].nota[j]);
           x=x+a[i].nota[j];
       }
       a[i].media=x/3;
    }
}
void imprimir (alunos b[tam])
{
    int j;

    for(j=0;j<tam;j++)
    {
        printf("\n O nome do aluno:  ");
        puts(b[j].nome);
        printf("\n O curso:  ");
        puts(b[j].curso);
        printf("\n A idade: %d",b[j].idede);
        printf("\n O numero da matricula: %d",b[j].matricula);
        if(a[j].media>=60)
        printf("\n APROVADO");
        if(a[j].media<60)
        printf("\n REPROVADO");
    }
}
int main()
*/
