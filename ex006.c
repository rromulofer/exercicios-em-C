#include<stdio.h>
#include<stdlib.h>

int main()
{
	int numero, matriz[linha][coluna], linha, coluna;

	printf("Digite um numero: ");
	scanf("%d", &numero);

	for (linha = 1; linha <= numero; linha++)
    {
        for (coluna = 1; coluna <= linha; coluna++)
        {
            printf("%3d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

	printf("\n");


system("PAUSE");
return 0;
}
