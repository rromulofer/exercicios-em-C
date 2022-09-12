#Programa que lê duas palavras da entrada e, na saída, imprime a menor palavra.

#include<stdio.h>
#include<string.h>
#include<ctype.h> //NecessÃ¡rio para o tolower/toupper

int main()
{
    char frase[30];
    int posicao_letra = 0, total_espacos = 0, total_vogais = 0;

    printf("Entre com uma frase:");
    scanf("%[^\n]s", frase);

    for (posicao_letra = 0; posicao_letra < strlen(frase); posicao_letra++)
    {
        frase[posicao_letra] = tolower(frase[posicao_letra]);
    }

    for (posicao_letra = 0; posicao_letra < strlen(frase); posicao_letra++)
    {
        if (frase[posicao_letra] == ' ')
        {
            total_espacos++;
        }
        else
        {
            if ((frase[posicao_letra] == 'a') || (frase[posicao_letra] == 'e') || (frase[posicao_letra] == 'i') || (frase[posicao_letra] == 'o') || (frase[posicao_letra] == 'u'))
            {
                total_vogais++;
            }
        }
    }
    printf("Total de vogais:%d\n", total_vogais);
    printf("Total de espaÃ§os:%d\n\n", total_espacos);
    return 0;
}
