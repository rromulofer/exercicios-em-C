#include<stdlib.h>

struct menor
{
	int valor[200], cont, menor, posicao, total=0;

};
struct menor num;


int main()
{

	 printf("-Digite 0 para parar- \n\n");

	for(num.cont=0; num.cont<200; num.cont++)
	{
		printf("Digite um numero: ");
		scanf("%d", &num.valor[num.cont]);

		if(num.valor[num.cont]==0)
		{
			num.cont=201;
		}
		else
		{
			num.total++;
		}
	}

	num.menor=num.valor[0];

	for(num.cont=0; num.cont<=num.total; num.cont++)
	{
		if(num.valor[num.cont]<num.menor)
		{
			num.menor=num.valor[num.cont];
			num.posicao=num.cont;
		}
	}

	printf("\n Menor valor: %d", num.cont);
	printf("\n Posicao: %d", num.posicao);
	printf("\n Total: %d", num.total);




	return 0;
}
