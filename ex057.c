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
