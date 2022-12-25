/*
Autor: Rômulo Souza Fernandes
E-mail: 00119110559@pq.uenf.br
Data de criação: 20/10/22
Ciência da Computação - UENF
*/

#include<stdio.h>

int main()
{
    char nome[25], sexo;
    int numero_pessoa, total_homens = 0, total_mulheres = 0;

    for (numero_pessoa = 1; numero_pessoa <= 5; numero_pessoa++)
    {
        printf("Entre com seu nome:");
        scanf("%s", nome);
        printf("Entre com o sexo:");
        scanf(" %c", &sexo);
        if (sexo == 'm')
        {
            total_homens++;
        }
        else
        {
            total_mulheres++;
        }
    }
    printf("Total de homens: %d\n", total_homens);
    printf("Total de mulheres: %d", total_mulheres);
    return 0;
}
