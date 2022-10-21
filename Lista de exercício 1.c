#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Lista de exercicios 01
    //Parte II - entrada e saida


    //n=5
    //int a,b,x;
    //printf("\nDigite o numero 5 e 10 para efetuar a soma.\n");
    //scanf("%d %d",&a,&b);
    //x=a+b;
    //printf("\nO valor da soma e': %d",x);


    //n=6
    //int a,b,c,x;
    //printf("\nDigite tres numeros inteiros:\n");
    //scanf("%d %d %d",&a,&b,&c);
    //x=a+b+c;
    //printf("\nO resultado da soma e': %d", x);


    //n=7
    //int a,b,x;
    //printf("\n Digite dois numeros inteiros quaiquer:\n");
    //scanf("%d %d",&a,&b);
    //x=a*b;
    //printf("\nO produto e': %d",x);


    //n=8
    //float x,p,s;
    //printf("Digite o valor do teu salario:\n");
    //scanf("%f",&s);
    //printf("Digite a porcentagem do aumento:\n");
    //scanf("%f",&p);
    //x=s+((p/100)*s);
    //printf("O seu novo salario era %.2f, com o aumento de %.2f, seu novo salario e': %.2f",s,p,x);


    //n=9
    //float t,h;
    //printf("\n Digite a hora:\n");
    //scanf("%f",&h);
    //t=h*60;
    //printf("\nO valor da hora %.2f, corresponde a %.2f minutos.",h,t);


    //n=10
    //float sb,vh,he,sl;
    //printf("\nDigite o valo do salario bruto:\n");
    //scanf("%f",&sb);
    //printf("\nDigite o numero de horas extras compridas no mes:\n");
    //scanf("%f",&he);
    //printf("\nDigite o valor pago por hora extra:\n");
    //scanf("%f",&vh);
    //sl=(sb+(he*vh))-(0.08*(sb+(he*vh)));
    //printf("\nO valor do salario liquido e' de: %.2f",sl);



    //n=11
    //float v,k;
    //printf("\nDigite o consumo de quilowatt do mes:\n");
    //scanf("%f",&k);
    //v=(k*0.12)+(0.18*(k*0.12));
    //printf("\nOvalor total a ser pago e' de: %.2f",v);



    //n=12
    //float km,l,m;
    //printf("\nDigite a quilometragem parcorrida:\n");
    //scanf("%f",&km);
    //printf("\nDigite a quantidade de combustivel gasto:\n");
    //scanf("%f",&l);
    //m=km/l;
    //printf("\nNo percurso de %.3f km, consumido %.3f de combustivel, a media de quilometro por litro e' de: %.3f km/l",km,l,m);



    //Parte III - Desvios condicionais

    //n=15
    //float a;
    //printf("\nDigite a nota do aluno:\n");
    //scanf("%f",&a);
    //if(a>100||a<0)
    //printf("\nNOTA INVALIDA\n");
    //if(a>=60&&a<=100)
    //printf("\nAPROVADO\n");
    //if(a<60&&a>=0)
    //printf("\nREPOVADO\n");


      //n=17
      //int a,x;
      //printf("\nDigite um numero inteiro qualquer para saber se este terminar com 0:\n");
      //scanf("%d",&a);
      //if(a%10==0)
      //{
      //    x=a/2;
      //    printf("\nA metade de %d e': %d",a,x);
      //}
      //else
      //printf("\nO numero digitado nao termina com 0.\n");


    //n=19
    //float s,st;
    //int a;
    //printf("\nDigite o valor do salario:\n");
    //scanf("%f",&s);
    //printf("\nDigite em meses, quanto tempo de trabalho:\n");
    //scanf("%d",&a);
    //if(a>1&&a<=12)
    //{
    //    st=s+(s*0.1);
    //    printf("\nO valor do salario com o reajuste e' de: %.2f",st);
    //}
    //if(a>12)
    //{
    //    st=s+(s*0.2);
    //    printf("\nO valor do salario com o reajuste e' de: %.2f",st);
    //}


    //n=26
    //float p1,p2,t,r;
    //int f;
    //printf("\nDigite o valor (0 a 10) da primeira prova:\n");
    //scanf("%f",&p1);
    //printf("\nDigite o valor (0 a 10) da segunda prova:\n");
    //scanf("%f",&p2);
    //printf("\nDigite o valor (0 a 10) do trabalho:\n");
    //scanf("%f",&t);
    //printf("\nDigite o numero de falta:\n");
    //scanf("%d",&f);
    //if(f<=15)
    //{
    //    r=((p1*0.3)+(p2*0.5)+(t*0.2));
    //    if(r>=6)
    //    {
    //        printf("\nAPROVADO\n");
    //    }
    //    if(r<6)
    //    {
    //        printf("\nPROVA FINAL\n");
    //    }
    //}
    //else
    //printf("\nREPROVADO\n");



    //Pate IV - Múltipla Escolha
    //n=27 e n=28 estao no caderno.

    //n=29
    //int x,y,t,a;
    //printf("\nDigite dois valores inteiros quaisquer:\n");
    //scanf("%d %d",&x,&y);
    //printf("\nDigite 1 para soma, 2 pra multiplicacao e 3 para divisao:\n");
    //scanf("%d",&a);
    //switch(a)
    //{
    //    case 1: t=x+y;
    //            printf("\nA soma entre os valores e':%d",t);
    //    break;
    //    case 2: t=x*y;
    //            printf("\nA multiplicacao enre os valores e':%d",t);
    //    break;
    //    case 3: if(x>y)
    //            {
    //                t=x/y;
    //                printf("\nA divisao entre eles e':%d",t);
    //            }
    //            if(y>x)
    //           {
    //                t=y/x;
    //                printf("\nA divisao entre eles e':%d",t);
    //            }
    //    break;
    //    default: printf("\nCodigo invalido\n);


    //n=31
    //int x,y,z,a;
    //printf("\nDigite dois numero inteiros quaisquer:\n");
    //scanf("%d %d",&x,&y);
    //if(x<1||y<1)
    //a=1;
    //if(x>10||y>10)
    //a=2;
    //if(x+y<8&&x<1||y<1&&x>10||y>10)
    //a=3;
    //if(x+y==8)
    //a=4;
    //if(x+y>8)
    //a=5;
    //switch(a)
    //{
    //    case 1: printf("\nValor invalido\n");
    //    break;
    //    case 2: printf("\nValor invalido\n");
    //    break;
    //    case 3: if(x>=1&&y>=1&&x<=10&&y<=10)
    //    {
    //        z=(x+y)/2;
    //    printf("\nA media entre %d e %d e': %d",x,y,z);
    //    }
    //    else
    //    printf("\nValor invalido\n");
    //    break;
    //    case 4: z=x*y;
    //    printf("O produto de %d e %d e': %d",x,y,z);
    //    break;
    //    case 5: if(x+y>8&&x<1||y<1&&x>10||y>10)
    //{
    //    if(x>y)
    //    {   z=x/y;
    //        printf("\n A divisao entre %d por %d e': %d",x,y,z);
    //    }
    //    if(y>x)
    //    {
    //        z=y/x;
    //        printf("\n A divisao entre  %d por %d e': %d",y,x,z);
    //    }
    //}
    //    default: printf("\nValor invalido\n");
    //}


    //n=39
    //int b=1,a,r;
    //printf("\n Digite a tabuada desejada:\n");
    //scanf("%d",&a);
    //while(b<=10)
    //{
    //    r=b*a;
    //    printf("\nO resultado da tabuada de %d e': %d",a,r);
    //    b++;
    //}


    //n=36
    //float c,z;
    //int t;
    //t=1;
    //while(z<c)
    //{
    //    c=1.50+(0.02*t);
    //    z=1.30+(0.03*t);
    //    t++;
    //}
    //printf("\nO Ze' vai ser maior que Chico daqui a %d anos.",t);






        return 0;
}
