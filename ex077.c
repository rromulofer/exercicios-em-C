/*
Autor: Rômulo Souza Fernandes
E-mail: 00119110559@pq.uenf.br
Data de criação: 20/10/22
Ciência da Computação - UENF
*/

#include<stdio.h>

#define TAM_MAX 5

int main()
{
    int vetor_a[TAM_MAX], vetor_b[TAM_MAX], vetor_c[TAM_MAX * 2], indice1, indice2;

    for (indice1 = 0; indice1 < TAM_MAX; indice1++)
    {
        printf("Entre com um numero para a posição %d do vetor_a:", indice1);
        scanf("%d", &vetor_a[indice1]);
    }
    for (indice1 = 0; indice1 < TAM_MAX; indice1++)
    {
        printf("Entre com um numero para a posição %d do vetor_b:", indice1);
        scanf("%d", &vetor_b[indice1]);
    }
    indice2 = 0;
    for (indice1 = 0; indice1 < TAM_MAX; indice1++)
    {
        vetor_c[indice2] = vetor_a[indice1];
        indice2++;
        vetor_c[indice2] = vetor_b[indice1];
        indice2++;
    }
    printf("\n\n");
    for (indice2 = 0; indice2 < TAM_MAX * 2; indice2++)
    {
        printf("%d\n", vetor_c[indice2]);
    }
    return 0;
}
