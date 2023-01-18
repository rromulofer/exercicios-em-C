/*
UENF - CCT - CC
Paradigmas de Linguagens de Programação
Aluno: Rômulo Souza Fernandes
E-mail: 00119110559@pq.uenf.br
Data de criação: 20/10/22 
*/

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
