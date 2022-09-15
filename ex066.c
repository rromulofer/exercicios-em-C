#include<stdio.h>

#define TAMANHO_VETOR 5

int main()
{
    int numero[TAMANHO_VETOR], indice, soma = 0;
    float media;

    for (indice = 0; indice < TAMANHO_VETOR; indice++)
    {
        printf("Entre com um número:");
        scanf("%d", &numero[indice]);
        soma = soma + numero[indice];
    }
    media = (float)soma / TAMANHO_VETOR;
    printf("A média dos números foi: %.2f\n", media);

    for (indice = 0; indice < TAMANHO_VETOR; indice++)
    {
        if (numero[indice] > media)
        {
            printf("%d ", numero[indice]);
        }
    }
    return 0;
}
