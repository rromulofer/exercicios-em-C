#include<stdio.h>

#define TOTAL_PESSOAS 5

int main()
{
    char nome[TOTAL_PESSOAS][30];
    char sexo[TOTAL_PESSOAS];
    int numero_pessoa;

    for (numero_pessoa = 0; numero_pessoa < TOTAL_PESSOAS; numero_pessoa++)
    {
        printf("Entre com o nome:");
        scanf(" %[^\n]", nome[numero_pessoa]);
        printf("Entre com o sexo:");
        scanf(" %c", &sexo[numero_pessoa]);
    }

    printf("\nNomes das mulheres:\n");
    for (numero_pessoa = 0; numero_pessoa < TOTAL_PESSOAS; numero_pessoa++)
    {
        if (sexo[numero_pessoa] == 'f')
        {
            printf("%s\n", nome[numero_pessoa]);
        }
    }

    printf("\nNomes dos homens:\n");
    for (numero_pessoa = 0; numero_pessoa < TOTAL_PESSOAS; numero_pessoa++)
    {
        if (sexo[numero_pessoa] == 'm')
        {
            printf("%s\n", nome[numero_pessoa]);
        }
    }

    return 0;
}
