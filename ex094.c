/*
Autor: Rômulo Souza Fernandes
E-mail: 00119110559@pq.uenf.br
Data de criação: 20/10/22
Ciência da Computação - UENF
*/

#include<stdio.h>

void imprimir_escada(int n)
{
    int linha, coluna;
    for (linha = 1; linha <= n; linha++)
    {
        printf("\n");
        for (coluna = 1; coluna <= linha; coluna++)
        {
            printf("%d ", coluna);
        }
    }
}

int main()
{
    int valor_limite;

    printf("Entre com o limite:");
    scanf("%d", &valor_limite);
    imprimir_escada(valor_limite);
    return 0;
}
