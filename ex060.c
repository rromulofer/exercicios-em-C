#include <stdio.h>
#include <string.h>

int main()
{
	char nome[50];
	int contador, contador2, contador3=0, tamanho;
	
	printf("entre com um nome\n");
	scanf("%[^\n]s", nome);
	
	tamanho = strlen(nome);
	
	for(contador = 0; contador < tamanho; contador++)
	{
		for(contador2 = 0; contador2 <= contador3; contador2++)
		{
			printf("%c", nome[contador2]);
		}
		printf("\n");
		contador3++;
	}
	
	return 0;
}
