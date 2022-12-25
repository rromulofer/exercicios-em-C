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
	float deposito, investimento, lucro;
	int meses, cont;
	
	printf("Digite o valor do deposito: ");
	scanf("%f", &deposito);

    printf("Digite o valor do investimento: ");
	scanf("%f", &investimento);	
	
	printf("Digite a quantidade de meses: ");
	scanf("%d", &meses);
	
	
    for(cont=1; cont<=meses; cont++)
    {
    	investimento=investimento*1.5;
	}
	
	printf("Lucro: %.0f", investimento);
	
	printf("\n");
	
system("PAUSE");
return 0;	
}
