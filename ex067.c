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
	int numero[5], cont, maior, posicao;
	
	
	for(cont=1; cont<=5; cont++)
	{	
	printf("Digite o numero desejado: ");
	scanf("%d", &numero[cont]);
    }
    
    maior=numero[1];
    
    for(cont=1; cont<=5; cont++)
    {
    	if(numero[cont]>maior)
    	{
    		maior=numero[cont];
		}
	}
	
	printf("Maior numero: %d", maior);
	
	for(cont=1; cont<=5; cont++)
	{
		if(numero[cont]==maior)
		{
			printf("\n Posicao: %d", cont);
		}
	}
	
	
	return 0;
	
}
