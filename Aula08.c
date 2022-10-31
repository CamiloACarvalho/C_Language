#include <stdio.h>
#include <stdlib.h>
#define tam 10

void pares (int vet [tam])
{
    int n;
    for (n=0; n<tam; n=n+2)
    {
        printf ("%d", vet [n]);
    }
}
int main()
{
  int vet [tam], i;
  for (i=0; i<tam; i++)
    {
        printf ("digite um vetor");
        scanf ("%d", &vet [i]);
    }
    pares (vet);
    return 0;
}
