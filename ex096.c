#include<stdio.h>

int funcaoargumento(char argumento)
{
	
	char caractere;
	int resultado=0;
		
	if(resultado>1)
	{
    
    caractere = 'p';
    
	return caractere;	
	}
	else
	{
	caractere = 'n';
    
	return caractere;
	}
	
}


int main()
{
	int numero, caractere;
	
	printf("digite um numero: ");
	scanf("%d", &numero);
	
	funcaoargumento(caractere);
	
	printf("caractere: %d", caractere);
	
	return 0;
}
