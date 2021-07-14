#include <stdio.h>

int main()
{
	int entrada ,saida, total;
	
	scanf("%d %d" ,&entrada ,&saida);
	
	if (entrada<saida)
		total = saida - entrada;
		
	else 
		total = (24-entrada) + saida;
	
	printf("O JOGO DUROU %d HORA(S)\n" ,total);

	return 0;
}

