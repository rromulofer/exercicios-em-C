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
        do
        {
            scanf(" %c", &sexo);
            if ((sexo != 'm') && (sexo != 'f') && (sexo != 'M') && (sexo != 'F'))
            {
                printf("\nSexo inválido.\nDigite novamente o sexo:");
            }
        }
        while ((sexo != 'm') && (sexo != 'f') && (sexo != 'M') && (sexo != 'F'));
        if ((sexo == 'm') || (sexo == 'M'))
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
