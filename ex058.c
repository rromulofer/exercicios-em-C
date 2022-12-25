/*
Autor: Rômulo Souza Fernandes
E-mail: 00119110559@pq.uenf.br
Data de criação: 20/10/22
Ciência da Computação - UENF
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char palavra[20];
    int posicao,contador;

    printf("digite uma palavra:");
    scanf("%s", palavra);
    posicao = strlen(palavra)-1;
    while(posicao>=0)
    {
    printf("%c",toupper(palavra[posicao]));
    posicao --;
    }
	printf("\n");
	
    system("pause");
}
