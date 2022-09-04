#include<stdio.h>
#include<stdlib.h>

int main()
{
	
 int n, par=1, impar=1, cont;

printf("Digite um numero: ");
scanf("%d", &n);

for(cont=1; cont<=n; cont++)
{
	if(cont%2!=1)
	{
	par=par*cont;
	}
	else
	{
		impar=impar*cont;
	}
}

printf("Produto dos pares: %d", par);

printf("\n");

printf("Produto dos impares: %d", impar);



printf("\n");
system("pause");
return 0;
}
