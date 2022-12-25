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
    int vetor_a[TAM_MAX], vetor_b[TAM_MAX], vetor_soma[TAM_MAX], indice, total_iguais = 0;

    for (indice = 0; indice < TAM_MAX; indice++)
    {
        printf("Entre com um numero para a posição %d do vetor_a:", indice);
        scanf("%d", &vetor_a[indice]);
    }
    for (indice = 0; indice < TAM_MAX; indice++)
    {
        printf("Entre com um numero para a posição %d do vetor_b:", indice);
        scanf("%d", &vetor_b[indice]);
    }
    for (indice = 0; indice < TAM_MAX; indice++)
    {
        vetor_soma[indice] = vetor_a[indice] + vetor_b[indice];
        if (vetor_a[indice] == vetor_b[indice])
        {
            total_iguais++;
        }
    }
    printf("O total de números iguais foi: %d\n\n", total_iguais);
    printf("Vetor A - Vetor B - Vetor Soma\n");
    for (indice = 0; indice < TAM_MAX; indice++)
    {
        printf("%7d + %7d = %10d\n", vetor_a[indice], vetor_b[indice], vetor_soma[indice]);
    }
    return 0;
}
