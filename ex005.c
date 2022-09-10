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
