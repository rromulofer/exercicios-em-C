#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char palavra1[20],palavra2[20],juncao[40];
    int posicao1=0,posicao2=0,tamanho1=0,tamanho2=0;


    printf("Digite uma palavra: ");
    scanf(" %s", palavra1);
    printf("\nDigite outra palavra: ");
    scanf(" %s", palavra2);
    posicao1 = strlen(palavra1)-1;
    posicao2 = strlen(palavra2)-1;
    while(posicao1>=0)
    {
    printf("%c",(palavra1[posicao1]),"\n");
    posicao1 --;
	}
	while(posicao2>=0)
    {
    printf("%c",(palavra2[posicao2]),"\n");
    posicao2 --;
	}
	tamanho1=strlen(palavra1);
	tamanho2=strlen(palavra2);
	printf("\n");
	if(tamanho1==tamanho2)
	{
    printf(" \n\n---As palavra sao iguais---");
    printf("\n");
	}
	else
	{
		printf(" -as palavras sao diferentes-");
		printf("\n");
	}
    strcat(palavra1,palavra2);
	printf(" concatenacao das duas palavras: %s",palavra1);
	printf("\n");

    system("pause");
}
