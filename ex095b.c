/*
Autor: Rômulo Souza Fernandes
E-mail: 00119110559@pq.uenf.br
Data de criação: 20/10/22
Ciência da Computação - UENF
*/

#include<stdio.h>

int funcaosoma(int numero1, int numero2, int numero3)
{
	int resultado;
	
	resultado=numero1+numero2+numero3;
	
	
	return resultado;
}


int main()
{
	int n1, n2, n3, soma;
	
	printf("digite um valor: ");
	scanf("%d", &n1);
	
	printf("digite outro valor: ");
	scanf("%d", &n2);
	
	printf("digite outro valor: ");
	scanf("%d", &n3);
	
	soma= funcaosoma(n1, n2, n3);
	
	printf("resultado da soma: %d ", soma);
	
	return 0;
}
