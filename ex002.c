/*
<<<<<<< HEAD
UENF - CCT - CC
Paradigmas de Linguagens de Programa��o
Aluno: R�mulo Souza Fernandes
E-mail: 00119110559@pq.uenf.br
Data de cria��o: 20/10/22 
=======
Autor: Rômulo Souza Fernandes
E-mail: 00119110559@pq.uenf.br
Data de criação: 20/10/22
Ciência da Computação - UENF
>>>>>>> ccd0bdb68b988ab320aac80bf6aa07a2cb58fe5a
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
