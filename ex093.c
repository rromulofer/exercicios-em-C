#include<stdio.h>

void imprimir_escada(int n)
{
    int linha, coluna;
    for (linha = 1; linha <= n; linha++)
    {
        printf("\n");
        for (coluna = 1; coluna <= linha; coluna++)
        {
            printf("%3d", linha);
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
