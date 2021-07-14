#include <stdio.h>

int main()
{
	int codigo, quantidade;
	float preco;
	
	scanf("%d %d" ,&codigo ,&quantidade);
	
	switch (codigo)
	{
		case 1: preco = quantidade * 4;
				break;
		case 2: preco = quantidade * 4.5;
				break;
		case 3: preco = quantidade * 5;
				break;
		case 4: preco = quantidade * 2;
				break;
		case 5: preco = quantidade * 1.5;
				break;
	}
	
	printf("Total: R$ %.2f\n" ,preco);
	
	return 0;
}

