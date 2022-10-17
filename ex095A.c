#include <stdio.h>

void soma(int numero1, int numero2, int numero3)
{
	int resultado;

	resultado=numero1+numero2+numero3;
	
	printf("resultado: %d", resultado);
}

int main()
{
	int numero1, numero2, numero3;

	printf("insira o numero1:\n");
	scanf("%d", &numero1);
	printf("insira o numero2: \n");
	scanf("%d", &numero2);
	printf("insira o numero3:\n");
	scanf("%d", &numero3);

	soma(numero1, numero2, numero3);


	return 0;
}
