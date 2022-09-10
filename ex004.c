#include<stdio.h>
#include<stdlib.h>

int main()
{
	int numero, linha, coluna;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	for (linha = 1; linha <= numero; linha++)
    {
        
        for (coluna = 1; coluna <= linha; coluna++)
        {
            printf("%2d ", linha*coluna);
        }
        printf("\n");
    }
	
	printf("\n");
	
	
system("PAUSE");
return 0;	
}
