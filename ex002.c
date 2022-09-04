#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, cont, result;

	printf("Digite um numero: ");
	scanf("%d", &n);

	for(cont=n; cont>=1; cont--)
	{
	result=result*cont;
	}

	printf("resultado: %d", result);

	printf("\n");

	system("pause");
	return 0;
}
