#include <stdio.h>
#include <stdlib.h>
#define tamanho 10
/*
int main()
{

    char a;
    printf("\n Meu Amor, quer se casar comigo? Responda s para sim ou n para nao.\n");
    scanf("%c",&a);
    if (a == 's')
    printf("\n Obrigado meu amor! Promento te fazer feliz e te amar por toda a vida!\n");
    if (a == 'n')
    printf("\n Mas porque nao quer se casar comigo? Eu te amo tanto!\n");
    if (a!='s'&&a!='n')
    printf("\n Mozao, ce ta me enrolando\n");

    return 0;
}*/

//Lista de exercicios 02 - subrotinas

//numero 1
/*
int idade(int a,int m,int d)
{
    int t;
    t=(a*365)+(m*30)+d;
    printf("\n A tua idade em dias e': %d",t);
    return idade;
}

int main()
{
    int x,y,z;
    printf("\n Digite quantos anos, mes e dias voce tem, que sera calculado o total de dias.\n");
    scanf("%d %d %d",&x ,&y ,&z);
    idade(x,y,z);
    return 0;
}
*/

//numero 2
/*
 int media(float n1, float n2, float n3)
 {
    float t;
     t=(n1+n2+n3)/3;
     if (t>=0&&t<=49)
     printf("\n Conceito D\n");
     if (t>=50&&t<=69)
     printf("\n Conceito C\n");
     if (t>=70&&t<=89)
     printf("\n Conceito B\n");
     if (t>=90&&t<=100)
     printf("\n Conceito A\n");
     if (t<0||t>100)
     printf("\n Nota Invalida\n");

     return media;
 }
 int main()
 {
     float a,b,c;
     printf("\n Digite as tres notas das TVC`s para se calcular a media do aluno: \n");
     scanf("%f %f %f",&a ,&b ,&c);
     media(a,b,c);
     return 0;
 }
*/


 //numero 3
/*
 void volfloat r)
 {
     float v;
     v = (4*3.141592*r*r*r)/3;
     printf("\n O volume da esfera e': %.3f",v);

 }
 int main()
 {
     float a;
     printf("\n Digite o valor do raio da esfera para calcular o seu volume: \n");
     scanf("%f",&a);
     vol(a);
     return 0;
 }
*/

 //numero 4
/*
int contimpar (int n1, int n2)
 {
    if(n1<n2)
    {
        while(n1<=n2)
        {
           if (n1%2!=0)
            printf("%d ",n1);
            n1++;
        }
    }
    if (n2<n1)
    {
        while(n2<=n1)
        {
            if (n2%2!=0)
            printf("%d ",n2);
            n2++;
        }


    }
 return contimpar;
 }
 int main()
 {
     int a,b;
     printf("\n Digite o valor de dois valor inteiros: \n");
     scanf("%d %d",&a,&b);
     contimpar(a,b);
     return 0;
 }
*/


//numero 5

void estacao(int d, int m)
{

    if (d>=32||m>=13)
    printf("\n DATA INVALIDA");
    if ((m==3&&d>=21&&d<=31)||(m==4&&d>=1&&d<=30)||(m==5&&d>=1&&d<=31)||(m==6&&d>=1&&d<21))
    printf("\n %d/%d e' OUTONO",d,m);
    if ((m==6&&d>=21&&d<=30)||(m==7&&d>=1&&d<=31)||(m==8&&d>=1&&d<=31)||(m==9&&d>=1&&d<21))
    printf("\n %d/%d e' INVERNO",d,m);
    if ((m==9&&d>=21&&d<=30)||(m==10&&d>=1&&d<=31)||(m==11&&d>=1&&d<=30)||(m==12&&d>=1&&d<21))
    printf("\n %d/%d e' PRIMAVERA",d,m);
    if ((m==12&&d>=21&&d<=31)||(m==1&&d>=1&&d<=31)||(m==2&&d>=1&&d<=28)||(m==3&&d>=1&&d<21))
    printf("\n %d/%d e' VERAO",d,m);

}
int main()
{
    int x,y;
    printf("\n Digite o qualquer dia e mes do ano: \n");
    scanf(" %d %d",&x,&y);
    estacao(x,y);
    return 0;
}


//numero 6
/*
int divisao(int dividendo,int divisor,int *resto, int d)
{

    *resto=dividendo%divisor;
    d=dividendo/divisor;
    printf("\n O valor da divisao e': %d. E resto %d",d,*resto);
    return divisao;
}
int main()
{
    int a,b,c,k;
    printf("\n Digite dois numeros interios para serem dividos: \n");
    scanf("%d %d",&a,&b);
    divisao(a,b,c,k);
    return 0;
}
*/

//numero 8
/*
float s(int n)
{
    float soma=0;
    int i;
    for (i=1;i<=n;i++)
    {
        soma=soma+(float)1/i;
    }
    return soma;
}
int main()
{
    int a;
    float b;
    printf("\n Digite um numero inteiro: \n");
    scanf("%d",&a);
    b=s(a);
    printf("\n O valor da soma e': %f",b);
    return 0;

}
*/

//numero 16
/*
float m(int n[])
{
    int i;
    float media=0;
    for (i=0;i<10;i++)
    {
        media=media+(n[i]/(float)10);
    }
    return media;
}
int main ()
{
    int v[10],c,x=0;
    float a;
    for (c=0;c<10;c++)
    {
        printf("Digite um numero interio pra ficar na posicao %d:  ",x);
        scanf("%d",& v[c]);
        x++;
    }
    a=m(v);
    printf("\n O valor da media dos 10 valores e': %f",a);
    return 0;
}
*/


//numero 20;
/*
int pos(char string[], char c)
{

    int i;
    for(i=strlen(string)-1;i>=0;i--)
    {
        if(string[i]==c)
        return i;
    }
    return -1;

}
int main()
{
    char a, palavra[100];
    int h;
    printf("\n Digite uma string: \n");
    gets(palavra);
    printf("\n Digite uma letra a ser procurada na string:\n");
    scanf("%c",&a);
    h=pos(palavra,a);
    printf("\n A ultima posicao da letra %c e': %d",a,h);
    return 0;
}
*/


//numero 21
/*
int contarbranco(char string[])
{
    int i,somaespacobranco=0;
    for(i=0;i<=string[i];i++)
        {
            if(string[i]==' ')
            {
                somaespacobranco++;
                string++;
            }
        }
    return somaespacobranco;

}
int main()
{
    char s[100];
    int a;
    printf("\n Digite uma string: \n");
    gets(s);
    a=contarbranco(s);
    printf("\n O numeros de espacos em branco na string e': %d",a);
    return 0;
}

*/
//numero 18
/*
int cont(char string[], char a)
{
    int i,v=0;
    for(i=0;i<=string[i];i++)
    {
        if(string[i]==a)
        {
            v++;
        }
    }
    return v;
}
int main()
{
    char s[50], letra;
    int x;
    printf("\Digite uma string: \n");
    gets(s);
    printf("\n Digite uma letra da string: \n");
    scanf("%c",&letra);
    x=cont(s,letra);
    printf("\n O numero de vezes que a letra %c aparece na string e': %d",letra,x);
    return 0;
}
*/

// numero 7

/*int somaintervalo(int n1, int n2)
{
    int vf=0, i;
    if(n1<n2)
    {
        for(i=n1;i<=n2;i++)
        vf=vf+i;
    }
    if(n2<n1)
    {
        for(i=n2;i<=n1;i++)
        vf=vf+i;
    }
    return (vf);
}

int main ()
{
    int x1,x2,a;
    printf("digite dois numeros inteiros\n");
    scanf("%d %d", &x1, &x2);
    a=somaintervalo(x1,x2);
    printf("a soma do intervalo vale: %d", a);
    return 0;
}*/

// numero 9

/*int valornegativo (int vet[])
{
    int i,c=0;
    for (i=0;i<10;i++)
    {
        if(vet[i]<0)
        c++;

    }
    return (c);
}

int main ()
{
    int vet[10], i, a;
    for (i=0;i<10;i++)
    {
        printf("digite os valores\n");
        scanf("%d", & vet[i]);
    }
    a=valornegativo(vet);
    printf("o numero de numeros negativos e: %d", a);
    return 0;
}*/


//numero 10
/*
int fun( int vet[])
{
    int i, maiorelemento;
    for(i=0;i<10;i++)
    {
        if(i==0)
        {
            maiorelemento=vet[i];
        }
        else
        {
            if (vet[i]>maiorelemento)
            {
                maiorelemento=vet[i];
            }
        }
    }
    return maiorelemento;
}
int main()
{
    int vetor[10],a,b,x=0;
    for(a=0;a<10;a++)
    {
        printf("\Digite um numero inteiro na posicao %d do vetor:  ",x);
        scanf("%d",&vetor[a]);
        x++;
    }
    b=fun(vetor);
    printf("\n O maior valor do vetor e': %d",b);
    return 0;
}
*/

//numero 11
/*
int ler(int vet[], int h)
{
    int i,menornum;
    for(i=0;i<10;i++)
    {
          if(vet[i]<menornum)
            {
                menornum=vet[i];
                if(menornum=vet[i])
                {
                    h=i;
                    return h;
                }
            }
        }

    return menornum;
}
int main()
{
    int vetor[10],a,b,x=0,r;
    for (a=0;a<10;a++)
    {
        printf("\n Digite um numero inteiro qualquer para assumir a posica %d do vetor: ",x);
        scanf("%d",&vetor[a]);
        x++;
    }
    b=ler(vetor,r);
    printf("\n O menor valor digitado do vetor e': %d. E esta na posicao: %d",b,r);
    return 0;
}

*/

//numero 13
/*
int sv(int vetor[])
{
    int i, somarvetor=0;
    for(i=0;i<vetor[i]; i++)
    {
        somarvetor=somarvetor+vetor[i];
    }
    return somarvetor;
}
int main()
{
    int vetor[tamanho],a,b,x=0;
    for(a=0;a<tamanho;a++)
    {
        printf("\n Digite um numero inteiro qualquer na posica %d do vetor: ",x);
        scanf("%d",&vetor[a]);
        x++;
    }
    b=sv(vetor);
    printf("\n A soma do intervalo fechado  de vetor e': %d",b);
    return 0;
}
*/

//numero 15








