/*
Autor: Rômulo Souza Fernandes
E-mail: 00119110559@pq.uenf.br
Data de criação: 25/10/22
Ciência da Computação - UENF
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char palavra1[20], palavra2[20];
    int tamanho_palavra1, tamanho_palavra2;

    printf("Entre com uma palavra:");
    scanf("%s", palavra1);
    printf("Entre com outra palavra:");
    scanf("%s", palavra2);
    tamanho_palavra1 = strlen(palavra1);
    tamanho_palavra2 = strlen(palavra2);
    printf("A primeira palavra possui %d caracteres.\n", tamanho_palavra1);
    printf("A segunda palavra possui %d caracteres.\n", tamanho_palavra2);
    if (tamanho_palavra1 < tamanho_palavra2)
    {
        printf("Palavra menor: %s\n", palavra1);
    }
    else
    {
        if (tamanho_palavra2 < tamanho_palavra1)
        {
            printf("Palavra menor: %s\n", palavra2);
        }
        else
        {
            printf("As palavras possuem tamanhos iguais.\n");
        }
    }
    return 0;
}
