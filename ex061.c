#include<stdio.h>
#include<string.h>
int main()
{
	char nome[50];
	int tamanho,contador1=0,contador2=0;
	
	printf("Digite uma palavra: ");
	scanf("%s",nome);
	printf("\n");
	tamanho=strlen(nome);
	contador1=tamanho;
	do
	{
		contador2=0;
	do
	{
		printf("%c",nome[contador2]);
		contador2++;
	}
	while(contador2<contador1);
	printf("\n");
	contador1--;
	}
	while(contador1>0);
	
}
