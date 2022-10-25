/*
Autor: Rômulo Souza Fernandes
E-mail: 00119110559@pq.uenf.br
Data de criação: 20/10/22
Ciência da Computação - UENF
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);	

	if(numero%2!=1)
	{
		numero=numero/2;
	}
	else
	{
		numero=3*numero+1;
	}
	
	
	printf("Numero: %d", numero);
	
return 0;	
}
