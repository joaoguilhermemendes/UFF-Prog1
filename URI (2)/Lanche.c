#include <stdio.h>

int main()
{
	int codigo, quantidade ,preco;
	
	scanf("%d %d" ,&codigo ,&quantidade);
	
	if (codigo = 1) {
		preco = quantidade * 4;
		printf("Total: R$ %.2f\n" ,preco);
	}
	
	if (codigo = 2) {
		preco = quantidade * 4.5;
		printf("Total: R$ %.2f\n" ,preco);
	}
	
	if (codigo = 3) {
		preco = quantidade * 5;
		printf("Total: R$ %.2f\n" ,preco);
	}
	
	if (codigo = 4) {
		preco = quantidade * 2;
		printf("Total: R$ %.2f\n" ,preco);
	}
	
	if (codigo = 5) {
		preco = quantidade * 1.5;
		printf("Total: R$ %.2f\n" ,preco);
	}
	return 0;
}

