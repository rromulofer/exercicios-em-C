#include<stdio.h>

#define TOTAL_PRODUTOS 5

int main()
{
    int vetor_quantidade[TOTAL_PRODUTOS], numero_produto;
    float vetor_preco[TOTAL_PRODUTOS], arrecadado_produto, total_arrecadado = 0;

    for (numero_produto = 0; numero_produto < TOTAL_PRODUTOS; numero_produto++)
    {
        printf("------------- Produto %d ------------\n", numero_produto);
        printf("Entre com o preço do produto:");
        scanf("%f", &vetor_preco[numero_produto]);
        printf("Entre com a quantidade do produto:");
        scanf("%d", &vetor_quantidade[numero_produto]);
    }
    printf("\n\n");
    for (numero_produto = 0; numero_produto < TOTAL_PRODUTOS; numero_produto++)
    {
        arrecadado_produto = vetor_preco[numero_produto] * vetor_quantidade[numero_produto];
        printf("Valor arrecadado com o produto %d foi : %.2f\n", numero_produto, arrecadado_produto);
        total_arrecadado = total_arrecadado + arrecadado_produto;
    }
    printf("O total arrecadado foi: %.2f", total_arrecadado);
    return 0;
}
