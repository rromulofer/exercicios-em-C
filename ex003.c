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
