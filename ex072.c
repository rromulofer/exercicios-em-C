#include<stdio.h>

#define TAM_MAX 5

int main()
{
    int vetor_a[TAM_MAX], indice, indice_invertido, auxiliar;

    for (indice = 0; indice < TAM_MAX; indice++)
    {
        printf("Entre com um numero para a posição %d do vetor_a:", indice);
        scanf("%d", &vetor_a[indice]);
    }

    indice_invertido = TAM_MAX - 1;

    for (indice = 0; indice < (TAM_MAX / 2); indice++)
    {
        auxiliar = vetor_a[indice];
        vetor_a[indice] = vetor_a[indice_invertido];
        vetor_a[indice_invertido] = auxiliar;
        indice_invertido--;
    }

    for (indice = 0; indice < TAM_MAX; indice++)
    {
        printf("%d\n", vetor_a[indice]);
    }
    return 0;
}
