#include <stdio.h>
#include <math.h>

int main()
{
    //parte 2 da primeira apostila - alternativa
    //n=1
    int a,  b, c, delta, x1, x2;
    printf("\n Digite os valores de a,b e c da equacao do segundo grau:\n");
    scanf("%d %d %d", &a, &b, &c);
    delta = pow(b,2) - 4*a*c;
    if(delta>=0)
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("\n As raizes X1 e X2 respctivamente %d,%d",x1,x2);
    }
    else
    {
        printf("\n Nao existe raizes reais.");
    }


    //n=2
    //int a,b;
    //printf("\n Digite dois numeros inteiros quaisquer para saber se maior, menor ou igual:\n");
    //scanf("%i %i", &a, &b);
    //if(a==b)
    //{
    //    printf("\n O numero %d e %d sao iguais.\n",a,b);
    //}
    //if(a>b)
    //{
    //    printf("\n O numero %d e' maior do que %d.\n",a,b);
    //}
    //if(a<b)
    //{
    //    printf("\n O numero %d e' menor do que %d.\n",a,b);
    //}


    //fiz errado, mas funciona tbm..huahsuhas
    //int a,b;
    //printf("\nDigite dois numeros inteiros quaisquer, se eles forem maiores que zero sao validos caso contrario nao validos:\n");
    //scanf("%d %d",&a,&b);
    //if(a&&b>0)
    //{
    //    printf("\nValores validos.\n");
    //}
    //else
    //{
    //    printf("\nValores invalidos.\n");
    //}


    //n=3
    //int a;
    //printf("\n Digite um numero inteiro qualquer para saber se impar ou par:\n");
    //scanf("%d",&a);
    //if(a%2==0)
    //printf("\n O numero %d e' par!\n",a);
    //else
    //printf("\n O numero %d e' impar!\n",a);


    //n=4
    //int a;
    //printf("\nDigite um numero inteiro qualquer para saber se este numero e' divisivel por 2 e 3 simultaneamente.\n");
    //scanf("%d",a);
    //if(a%2==0&&a%3==0)
    //printf("\nEste numero e' divisivel por 2 e 3 ao mesmo tempo!\n");
    //if(a%2==0&&a%3!=0)
    //printf("\n Este numero nao e' divisivel nem por 2 e nem por 3.\n");
    //if(a%2!=0&&a%3==0)
    //printf("\n Este numero nao e' divisivel nem por 2 e nem por 3.\n");



    //n=5
    //int a;
    //printf("\nDigite um numero qualquer para saber se e' divisivel por 2 e 3 e indivisivel por 5:\n");
    //scanf("%d",a);
    //if(a%2==0&&a%3==0)
    //{
    //    (a%5!=0);
    //    printf("\n Este numero esta nestas condicoes.\n");
    //}
    //else
    //printf("\n Este numero nao esta nas condicoes determinadas.\n");



    //n=6
    //int a;
    //printf("\nDigite os numeros relacionados aos dias da semana, como 1 para domingo, e assim por diante...\n");
    //scanf("%d",&a);
    //switch(a)
    //{
    //    case 1: printf("\nDomingo\n");
    //    break;
    //    case 2: printf("\nSegunda-Feira\n");
    //    break;
    //    case 3: printf("\nTerca-Feira\n");
    //    break;
    //    case 4: printf("\nQuarta-Feira\n");
    //    break;
    //    case 5: printf("\nQuinta-Feira\n");
    //    break;
    //    case 6: printf("\nSexta-Feira\n");
    //    break;
    //    case 7: printf("\nSabado\n");
    //    break;
    //    default: printf("\nValor nao correspondente a semana.\n");
    //}




    //n=7
    //float x,y,r;
    //int a;
    //printf("\n Digite o dois numeros interios quaisquer em ordem decrescente:\n");
    //scanf("%f %f",&x,&y);
    //printf("\n Agora digite 1 para efetuar a soma entre os numeros digitados, 2 para subtracao, 3 para multiplicacao e 4 para divisao.\n");
    //scanf("%d",&a);
    //if(a==1)
    //{
    //    r=x+y;
    //    printf("\n O resultadado da soma (+) e': %.1f",r);
    //}
    //if(a==2)
    //{
    //    r=x-y;
    //    printf("\n O resultadado da subtracao (-) e': %.1f",r);
    //}
    //if(a==3)
    //{
    //    r=x*y;
    //    printf("\n O resultadado da multiplicacao (*) e': %.1f",r);
    //}
    //if(a==4&&x>y&&y!=0)
    //{
    //    r=x/y;
    //    printf("\n O resultadado da divisao (/) e': %.2f",r);
    //}
    //if(a==4&&y==0)
    //{
    //    printf("\n Nao e' possivel calcular a divisao.\n");
    //}
    //if(a!=1&&a!=2&&a!=3&&a!=4)
    //{
    //    printf("\n Numero invalido.\n");
    //}
 return 0;
}

