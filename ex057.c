/*
Autor: Rômulo Souza Fernandes
E-mail: 00119110559@pq.uenf.br
Data de criação: 20/10/22
Ciência da Computação - UENF
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char palavra[20];
	int posicao=0;

    printf("informe uma palavra: ");
    scanf("%s",palavra);
   // posicao=strlen(palavra); nesse caso usa-se '\n' no lugar do '\0'
    for(posicao=0; palavra[posicao]!= '\0'; posicao++)
    {
    printf("%c\n",(palavra[posicao]));
    
    }
	return 0;
}
