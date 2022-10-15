#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char frase[30];
    int posicao_letra = 0, total_espacos = 0, total_vogais = 0;

    printf("Entre com uma frase:");
    scanf("%[^\n]s", frase);
    while (frase[posicao_letra] != '\0')
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
        posicao_letra++;
    }
    // for (posicao_letra = 0; posicao_letra < strlen(frase); posicao_letra++)
    // {
    //     if (frase[posicao_letra] == ' ')
    //     {
    //         total_espacos++;
    //     }
    //     else
    //     {
    //         if ((frase[posicao_letra] == 'a') || (frase[posicao_letra] == 'e') || (frase[posicao_letra] == 'i') || (frase[posicao_letra] == 'o') || (frase[posicao_letra] == 'u'))
    //         {
    //             total_vogais++;
    //         }
    //     }
    // }


    printf("Total de vogais:%d\n", total_vogais);
    printf("Total de espaços:%d\n\n", total_espacos);

    return 0;
}
