#include <stdio.h>

int main()
{
	int idade ,dias ,bissexto;
	
	printf("Qual eh sua idade: ");
	scanf("%d" ,&idade);
	
	bissexto = (idade / 4);
	dias = (idade * 365) + bissexto;

	printf("\nVoce ja viveu [%d] dias na terra\n" ,dias);

	return 0;
}

