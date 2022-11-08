#include <stdio.h>
#include <stdlib.h>
#define tam 10
/*
typedef struct
{
    char nome[tam];
    int nummat;
    float med;
}alunos;
int main()
{
    alunos a;
    printf("\n Digite o seu nome, o numero de sua matricula e sua media:\n");
    gets(a.nome);
    scanf("%d %f",&a.nummat,&a.med);
    if(a.med>=60&&a.med<=100)
    printf("\n APROVADO");
    if(a.med<60&&a.med>=0)
    printf("\n REPROVADO");
    if(a.med<0||a.med>100)
    printf("\n NOTA INVALIDA");
    return 0;
}
*/
/*
typedef struct
{
    char prop[80];
    char cor[15];
    char turno;
    char placa[8];
}cadastro;
void lermat ( cadastro x[tam])
{
    int i;
    for(i=0;i<tam;i++)
    {
    printf("\n Digite o nome do proprietario:\n");
    gets(x[i].prop);
    scanf("%*c");
    printf("\n Digite a cor do veiculo:\n");
    gets(x[i].cor);
    scanf("%*c");
    printf("\n Digite o turno que o veiculo foi quardado:\n");
    scanf("%c",&x[i].turno);
    scanf("%*c");
    printf("\n Digite a placa do veiculo:\n");
    gets(x[i].placa);
    scanf("%*c");
    }
}
int main()
{
    cadastro a[tam];
    lermat(a);
    int j;
    for(j=0;j<tam;j++)
    {
        printf("\n Proprietario: ");
        puts(a[j].prop);
        printf("\n A cor do veiculo: ");
        puts(a[j].cor);
        printf("\n A placa do veiculo: ");
        puts(a[j].placa);
        printf("\n O turno que o veiculo foi quardado: %c",a[j].turno);
    }
    return 0;
}

*/

